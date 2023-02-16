class Solution {
public:
    int averageValue(vector<int>& nums) {
        int result=0;
        int result_count=0;
        auto it=nums.begin();
        while(it != nums.end())
        {
            if((*it)%3==0)
            {
            if((*it)%2==0)
            {
                result=result+(*it);
                result_count++;
            }
            }
            it++;
        }
        if(result_count==0)
        return result;
        else
        return result/result_count;
    }
};
