class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int size = nums.size();
        // //cout<<size;
        // while(i<size)
        // {
        //     if(nums[i]==target)
        //     return i;
        //     //(nums[i]<target)
        //     //return i-1;
        //     if(target > nums[i] && target <nums[i+1])
        //     return i;


        //     i++;
        // }
        if(target<nums[i]||target==nums[i])
            return 0;
        for( i=0;i<size-1;i++)
        {
            if(nums[i]==target)
            return i;
            else if(target > nums[i] && target <= nums[i+1])
            return i+1;
        }
        return i+1;
    }
};
