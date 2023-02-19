class Solution {
public:
int length(string str)
{
    int i=0,count=0;
    while(str[i])
    {
        count++;
        i++;
    }
    return count;
}
/*
    string gcdOfStrings(string str1, string str2) {
        string base,base2;
      length(str1) < length(str2)?base =str1:base=str2;
      length(str1) > length(str2)?base2=str1:base2=str2;
      int count=0;
      while(count != length(base))
      {
      for(int i=0;i<length(base);i++)
      {
          if(base[i]==base2[i])
          {
              count++;
          }
      }
      if(count != length(base))
         base[length(base)]='\0';
      }
      return base;
    }*/

int gcd(int a,int b)
{
   int result = ((a < b) ? a : b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

string gcdOfStrings(string str1, string str2) {
    if(str1+str2 == str2+str1)
    {
        return str1.substr(0,gcd(length(str1),length(str2)));
    }
    else
    return "";
}

};
