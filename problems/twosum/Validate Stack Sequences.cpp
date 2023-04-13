class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int size = pushed.size();
        std::stack<int> result;

        int j = 0;
        for (int i = 0; i < size; i++) {
            result.push(pushed[i]);
            while (!result.empty() && j < size && result.top() == popped[j]) {
                result.pop();
                j++;
            }
        }

        return j == size;
    }
};
