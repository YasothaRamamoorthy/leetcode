class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
       long long int minposition=-1,maxposition=-1,leftbound=-1;
       long long int answer=0;
       int size=nums.size();


       for(int i=0;i<size;i++)
       {
           if(nums[i]==minK)
           minposition=i;
           if(nums[i]==maxK)
            maxposition=i;
           if(nums[i]>maxK || nums[i]<minK)
            leftbound=i;
        if(minposition!=-1 && maxposition!=-1)
        answer+=max(0,min(maxposition , minposition)-leftbound);
       }
       return answer;
    }
};
