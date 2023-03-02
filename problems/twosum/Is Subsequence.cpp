int check[26]={0};
       int size=t.length();
       for(int i=0;i<size;i++)
       check[t[i]-96]++;

       int s_size=s.length();
       int prev=0;
       for(int i=0;i<s_size;i++)
       {
           if((s[i]-96) < prev || check[s[i]-96]==0)
           return false;
           prev=s[i]-96;
       }
       return true;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size=s.length();
        int t_size=t.length();

        int count=0;

        for(int i=0;i<t_size ;i++)
        {
            if(s[count]==t[i])
            count++;
        }
        return (count==s_size);
    }
};
