class Solution {
public:
int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
bool possible(vector<int>& weights, int mid,int days)
{
    int daysne=1,load=0;
    for(int i=0;i<weights.size();i++)
    {
        load+=weights[i];
        if(load>mid)
        {
            daysne++;
        load=weights[i];
        }
    }
    return daysne <=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int totalload=0;
        int maxload=0;
        for(int i=0;i<weights.size();i++)
        {
            totalload+=weights[i];
            maxload=max(maxload,weights[i]);
        }
        int l=maxload,r=totalload;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(possible(weights,mid,days))
            r=mid;
            else 
            l=mid+1;
        }
        return l;
    }
};
