class Solution {
public:
// int subarraycount(vector<int>& nums,int start,int end,int &count)
// {
//     if(size==0)
//     return 0;
//     else
//     {
//         for(int i=start;i<end;i++)
//         {
//             if(nums[i]==0)
//             count++;
//         }
//     }
// }
    long long zeroFilledSubarray(vector<int>& nums) {
      int size=nums.size();
      int temp=size;
      long long result=0;
      long long count=0;
        for(int i=0;i<temp;i++)
        {
            if(nums[i]==0)
             count++;
             else
             count=0;

             result=result+count;
        }
    
      return result;
    }
};




  long long zeroFilledSubarray(vector<int>& nums) {
      int size=nums.size();
      int temp=size;
      long long count=0;
      while(temp>0)
      {
        for(int i=0;i<temp;i++)
        {
            if(nums[i]==0)
            count++;
        }
        temp = temp/2;
      }
      return count;
    }
};
