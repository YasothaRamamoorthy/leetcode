int length(string a)
{
    int i=0,count=0;
    while(a[i])
    {
count++;
    }
    return count;
}

int max_lenth;
class Solution {
public:
    string addBinary(string a, string b) {
        /*int i=0;
        int carry=0;
        int sum=0;
        string result;
        while(a[i]||b[i]||carry)
        {
            sum= a[i]+b[i]+carry;
            if(sum >1)
           { carry= sum-1;
            sum = 1;
            result[i]=sum;
            }

        }

        return result;*/
        int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i >= 0 || j >= 0 || carry) {
            if(i >= 0) {
                carry += a[i] - '0';
                i--;
            }
            
            if(j >= 0) {
                carry += b[j] - '0';
                j--;
            }
    
            ans += (carry % 2 + '0');
            
            carry = carry / 2;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
