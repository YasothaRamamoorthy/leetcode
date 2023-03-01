class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        int i;
        //cout<<size<<endl;
        int sum=nums[0];
       // nums[0]=sum;
        for(i=0;i<size-1;i++)
        {
            nums[i]=sum;
            sum=sum+nums[i+1];
            cout<<sum<<endl;
        }
        nums[i]=sum;
        return nums;
    }
};
