bool isPalindrome(long long int x){
    if(x<0)
      return false;
    else
    {
       long long int tem=0,digit,x1=x;
        while(x1){
            digit=x1%10;
            tem=tem*10+digit;
            x1=x1/10;
        }
        if(tem==x)
          return true;
        else
         return false;
    }

}
