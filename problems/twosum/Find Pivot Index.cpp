//time limit exceed solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        int mid=size/2;
        int left_sum=0;
        for(int i=0;i<mid;i++)
        left_sum=left_sum+nums[i];

        int right_sum=0;
        for(int i=mid+1;i<size;i++)
        right_sum=right_sum+nums[i];
        cout<<right_sum<<endl;
        cout<<left_sum;
        if(right_sum==left_sum)
          {return mid;}

        return -1;
    }
};


//it will work in all cases

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+nums[i];
        }
        int left_sum=0;
        for(int i=0;i<size;i++)
        {
            //left_sum=left_sum+nums[i];

            if((sum-(left_sum+nums[i]))==left_sum)
            return i;

            cout<<left_sum;
            cout<<sum - left_sum<<endl;
            left_sum=left_sum+nums[i];
        }
        return -1;
    }
};
