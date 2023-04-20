//using functions
class Solution {
public:
 int counting_element(int found,vector<int>& nums)
 {
     int count=0;
     for(int i=0;i<nums.size();i++)
     {
         if(found==nums[i])
         count++;
     }
     return count;
 }
    bool containsDuplicate(vector<int>& nums) {
int duplicate_count;
        for(int i=0;i<nums.size();i++)
         { duplicate_count =   counting_element(nums[i],nums);
         if(duplicate_count>=2)
         return true;
         }

         return false;
    }
};

//using loop
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                return true;
            }
        }
        return false;
    }
};
//soting 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());

      for(int i=0;i<nums.size()-1;i++)
      {
          if(nums[i]==nums[i+1])
          return true;
      }  
      return false;
    }
};

//using set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};

