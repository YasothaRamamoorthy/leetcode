class Solution {
public:
    int longestPalindrome(string s) {
       int count[128]={0};
       int result=0;
       int size=s.length();
       if(size==1)
       return 1;
       if(size==2)
       {
           if(s[0]==s[1])
           return 2;
           else
           return 1;
       }
       for(int i=0;i<size;i++)
       {
           count[s[i]-63]++;
       }
       for(int i=0;i<128;i++)
       {
           result+=count[i]/2*2;
           if(result%2==0 && count[i]%2==1)
           result++;
       } 
       return result;
    }
};
