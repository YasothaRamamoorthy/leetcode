class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool> result;

       int size=candies.size();
       int max=INT_MIN;
       for(int i=0;i<size;i++)
       {
         if(candies[i]>max)
         max=candies[i];  
       } 
       for(int i=0;i<size;i++)
       {
         if(candies[i] + extraCandies >= max)
         result.push_back(true);
         else
         result.push_back(false);
       } 
       
       return result;
    }
};
