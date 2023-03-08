class Solution {
    bool canEatAll(vector<int>& piles, int speed,int h)
    {
        int time=0;
        int size=piles.size();

        for(int i=0;i<size;i++)
        {
            time+=(piles[i]-1)/speed+1;
            if(time>h)
            return false;
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int low=1;
       int high= *max_element(piles.begin(),piles.end());
       while(low<high)
       {
           int mid=(low+high)/2;

           if(canEatAll(piles,mid,h))
           high=mid;
           else
           low=mid+1;
       }
       return low; 
    }
};
