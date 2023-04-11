// using stack

class Solution {
public:
    string removeStars(string s) {
        int i=0;
        stack<char> str;
       while(i<s.length())
       {
           if(s[i]!='*')
           str.push(s[i]);
           else
           str.pop();
           i++;
       } 

       string result="";
       while(!str.empty())
       {
           result.push_back(str.top());
           str.pop();
       }
       reverse(result.begin(),result.end());
       return result;
    }
};


// using strings

class Solution {
public:
    string removeStars(string s) {
      string result="";

      int i=0;
      while(i<s.length())
      {
          if(s[i]=='*')
          result.pop_back();
          else
          result.push_back(s[i]);
          i++;
      }  
      return result;
    }
};

// using two pointer

class Solution {
public:
    string removeStars(string s) {
     char ch[s.length()];

     int j=0;

     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='*')
         j--;

         else
         ch[j++]=s[i];
     }   

     string result="";
     for(int i=0;i<j;i++)
         result.push_back(ch[i]);

         return result;
    }
};
