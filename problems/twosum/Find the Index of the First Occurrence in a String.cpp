// int stringcmp(string haystack,int start,int end,string needle)
// {
// int i=start;
// int j=0;
// while(i<end && j<end)
// {
//     if(haystack[i]!=needle[j])
//      return 0;
//     j++;
//     i++;
// }
// return 1;
// }

// //making a window that size is needles size
// int window=needle.length();
// int size=haystack.length();
// int end=window-1;
// for(int i=0;i<size;i++)
// {
//     if(stringcmp(haystack,i,i+end,needle))
//      return i;
// }
// return -1;
class Solution {
public:
    int strStr(string haystack, string needle) {
      int windowstart,j;
      int h_size=haystack.length();
      int size=needle.length();


      for(int windowstart=0;windowstart<= h_size-size;windowstart++)
      {
          for(j=0;j<size;j++)
          {
              if(needle[j]!=haystack[windowstart+j])
               break;
          if(j== size-1)
          return windowstart;
          }
      }  
      return -1;
    }
};
