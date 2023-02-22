class Solution {
public:
int max(int a,int b)
{
    return a>b?a:b;
}
    int totalFruit(vector<int>& fruits) {
        int max_size=0;
        int start,end;
        for(start=0;start<fruits.size();start++)//starting of sub array
        {
            for(end=0;end<fruits.size();end++)//end of the subarray
            {
                set<int> basket;//to finding the unique fruits we using set (set does not allow the duplicate elements)
//in this problem finding the unqiue fruits in subarray
                for(int i=start;i<=end;i++)
                {
                    basket.insert(fruits[i]);
                }

                if(basket.size() < 3)
                {
                max_size = max(max_size,end-start+1);
                }
            }
        }
        return max_size;
    }
};
