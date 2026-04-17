class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int k = 0;
        
        while (i < n) {
            char current = chars[i];
            int j = i;
            while (j < n && chars[j] == current) {
                j++;
            }
            int count = j - i;
            chars[k++] = current;
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[k++] = c;
                }
            }
            
            i = j;
        }
        
        return k;
    }
};