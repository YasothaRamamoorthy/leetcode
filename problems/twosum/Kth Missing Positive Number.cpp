//   int count[1000]={0};
    //   int size=arr.size();

    //   for(int i=0;i<size;i++)
    //   {
    //       count[arr[i]]++;
    //   }  

    //   int i=0;
    //   while(k)
    //   {
    //       if(count[i]==0)
    //         k--;

    //       i++;
    //   }
    //   return i;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int i = 0, size = arr.size();
    while (i < size) {
        int mid = i + (size - i) / 2;
        if (arr[mid] - mid > k) size = mid;
        else i = mid + 1;
    }
    return i + k;

    }
};
