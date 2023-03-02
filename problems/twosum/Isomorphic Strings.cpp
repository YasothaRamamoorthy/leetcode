//right solution
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int size=s.length();
        unordered_map<char, int> s_map,t_map;
        //papap and titii in this p and t are always come in 
        // same narrow a and i also but in the lasr p is combined with i so we returning false
        //step1 : create a map 
        //step 2: check p alway map to t if not return false and
        // t also always map to p if not return false
    
        for(int i=0;i<size;++i)
        {
            s_map[s[i]];
            if(s_map[s[i]]&&s_map[s[i]]!=t[i]) //check p alway map to t if not return false
            return false;
            if(t_map[t[i]] &&t_map[t[i]]!=s[i]) //t also always map to p if not return false
             return false;
            s_map[s[i]]=t[i];
            t_map[t[i]]=s[i];
        }
        return true;
    }
};

//just try

int s_arr[26]={0};
        int t_arr[26]={0};

        int s_size=s.length();
        int t_size=t.length();

        for(int i=0;i<s_size;i++)
        {
            s_arr[s[i]-96]++;
        }
        for(int i=0;i<t_size;i++)
        {
            t_arr[t[i]-96]++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(s_arr[i]==2)
            {
                for(int i=0;i<26;i++)
                {
                    if(t_arr[i]==2)
                    return true;
                }
            }
            
        }
        if(s_size<=2 && t_size<=2)
        return true;

        return false;
