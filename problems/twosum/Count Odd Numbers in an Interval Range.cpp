class Solution {
public:
    int countOdds(int low, int high) {
        int i=low,count=0;
        while(i<=high)
        {
            if(i%2==1)
            count++;
            i++;
        }
        return count;
    }
};


class Solution {
public:
    int countOdds(int low, int high) {
     if(!(low&1))
     {
         low++;
     }   
     return low>high?0:(high-low)/2+1;
    }
};



/*Check if low is odd. This could be easily checked using % operator, but we used bit wise operator & as they are more efficient.
If low is odd, increment it.
Return (high - low) / 2 + 1. The important point here is to check that
if low after incrementing became greater than high this will happen when low = high, and in that case, we should return 0.*/
