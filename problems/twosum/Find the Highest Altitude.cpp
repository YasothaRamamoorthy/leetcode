class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current =0;
        int highest_gain=current;

        for(int altitudegain:gain)
        {
            current=current+altitudegain;
            highest_gain = max(highest_gain,current);
        }
        return highest_gain;
    }
};

