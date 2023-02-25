//approach --1
class Solution {
public:

    int maxProfit(vector<int>& prices) {
       int max_val=INT_MIN;
       int min_val=INT_MAX;
       int min_index,max_index;
       int result=0;

     for(int i=0;i<prices.size();i++)
       {
           if(prices[i]<min_val)
           {
               min_val=prices[i];
               min_index=i;
           }
       }
       for(int i=min_index;i<prices.size();i++)
       {
           if(prices[i]>max_val)
           {
               max_val=prices[i];
               max_index=i;
           }
       }
    //    cout<<max_val;
    //    cout<<min_val;

       if(min_index<max_index)
       result=max_val- min_val;

       return result;
    }
};

//approach--2


class Solution {
public:

    int maxProfit(vector<int>& prices) {
       //int max_val=INT_MIN;
      // int min_val=0;
       int min_index=0;
       //max_index;
       int result=0;

       if(!prices.size()) return 0;
     for(int i=0;i<prices.size();i++)
       {
           if(prices[i]<prices[min_index])
           {
               min_index=i;
                continue;
           }
           result=max(result,prices[i]-prices[min_index]);
       }
    //    for(int i=min_index;i<prices.size();i++)
    //    {
    //        if(prices[i]>max_val)
    //        {
    //            max_val=prices[i];
    //            max_index=i
    //        }
    //    }
    //    cout<<max_val;
    //    cout<<min_val;

    //    if(min_index<max_index)
    //    result=max_val- min_val;

       return result;
    }
};
