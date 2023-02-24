class Solution {
public:
int min(int a,int b)
{
    return a>b?b:a;
}
    int minimumDeviation(vector<int>& nums) {
        priority_queue <int> pq;
        int min_v=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
            nums[i]=nums[i]*2;
            pq.push(nums[i]);
            min_v=min(min_v,nums[i]);
        }
        int result=INT_MAX;
        while(1)
        {
            int max_v=pq.top();
            pq.pop();

            result=min(result,max_v - min_v);
            if(max_v%2==1)
            break;
            max_v=max_v/2;
            min_v=min(min_v,max_v);
            pq.push(max_v);
        }
        return result;
    }
};
