class Solution {
public:
    int addDigits(int num) {
        int result=1;
        if(num==0)
        return 0;
        else
        return result +(num-1)%9;
    }
};
