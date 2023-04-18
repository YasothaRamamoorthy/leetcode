class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int i=0,j=0;
        while(i<word1.size() || j<word2.size())
        {
            if(i<word1.size())
            result.push_back(word1[i++]);
            if(j<word2.size())
            result.push_back(word2[j++]);
        }
        return result;
    }
};

//two pinter
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";

        for(int i=0;i<max(word1.size(),word2.size());i++)
        {
            if(i<word1.size())
            result.push_back(word1[i]);
            if(i<word2.size())
            result.push_back(word2[i]);
        }
        return result;
    }
};

