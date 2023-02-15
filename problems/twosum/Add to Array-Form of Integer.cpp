class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long int digit = num[0];
        int size = num.size();
       /* for(int i=1;i<size;i++)
        {
            digit=digit*10+num[i];
        }*/
        int result_dig=k;
        vector<int> result;
        //cout<<digit;
        //long long int final_res = digit+k;
        //cout<<final_res;
        int n = size;
        while(--n>=0 || result_dig>0)
        {
            if(n>=0)
             result_dig+=num[n];
             result.push_back(result_dig%10);
             result_dig=result_dig/10;
            //int ins = final_res%10;
            //result.push_back(ins);
            //final_res = final_res/10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
