//solution with time limit exceed

class Solution {
public:
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
    vector<int> sortArray(vector<int>& nums) {

    int size=nums.size();
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(nums[j]<nums[i])
            swap(nums[i],nums[j]);
        }
    } 
    return nums;
    }  
};


//to make the work simple i have use priority_queue
//priority_queue will store from high to low values

class Solution {
public:
 vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> pq;

        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            pq.push(nums[i]);
        }
        for(int i=0;i<size;i++)
        {
            nums[i]=pq.top();
            pq.pop();
        }
    
       reverse(nums.begin(),nums.end());
        return nums;
    }
};
