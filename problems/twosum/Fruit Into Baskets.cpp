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

                if(basket.size() < 3)//the unique fruits must be 2 not more than 2 bcz we have only two basket to handle two type of fruits
                {
                max_size = max(max_size,end-start+1);
                }
            }
        }
        return max_size;
    }
};

//the above code time complexity is o(n^3) 

class Solution {
public:
int max(int a,int b)
{
    return a>b?a:b;
}
    int totalFruit(vector<int>& fruits) {
        int max_size=0;
        for(int start=0;start<fruits.size();start++)
        {
            int end=start;
            set<int> basket;
            while(end<fruits.size())
            {
                if(basket.size() ==2 && basket.find(fruits[end])==basket.end())
                break;

                basket.insert(fruits[end]);
                end++;
            }
            max_size=max(max_size,end-start);
        }
       return max_size; 
    }
};

//the above code time complexity is o(n^2)




class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int> basket;
       int start=0,end=0;
       for(start,end;end<fruits.size();end++)
       {
        basket[fruits[end]]++; 
       if(basket.size() > 2)
       {
        basket[fruits[start]]--;
       if(basket[fruits[start]]==0)
         basket.erase(fruits[start]);
         start++;
       }
       }
       return end - start;
    }
};


// the above program time complexity is o(n) 
