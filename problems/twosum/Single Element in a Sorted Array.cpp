class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // long long int count;
        // int val;
        // int result=0;
        // int curr=0;
        // int size = nums.size();
        // int i=0;

        // while(curr<size)
        // {
        //     count=0;
        //     val=nums[curr];
        //     while(i<size)
        //   {
        //     if(nums[curr]==nums[i])
        //     {
        //         count=count+1;
        //     }
        //   }
        //   if(count==1)
        //   {
        //        result = val;
        //   }
        // }
        //   return result;
        int result=0;
        for(int i=0;i<nums.size();i++)
           result=result^nums[i];

           return result;
    }
};
