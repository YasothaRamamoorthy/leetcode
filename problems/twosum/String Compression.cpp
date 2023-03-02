class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        if (size == 1) {
            return 1;
        }
        
        int i = 0, j = 0;
        while (i < size) {
            int count = 1;
            while (i < size - 1 && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }
            
            chars[j++] = chars[i++];
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[j++] = c;
                }
            }
        }
        
        return j;
    }
};
