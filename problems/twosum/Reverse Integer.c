
int reverse(int x){
 
    long rev = 0;
    for(;x;x/=10)
        rev = rev *10 + x%10;
    
    x = rev;
    if(rev != x) return 0;
    
    return rev;
}
