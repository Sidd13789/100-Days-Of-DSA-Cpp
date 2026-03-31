class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;
        while(srow <= erow && scol <= ecol) {
            // Top row
            for(int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            // Right column
            for(int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            // Bottom row
            for(int j = ecol - 1; j >= scol; j--) {
                if(srow == erow) break;
                ans.push_back(matrix[erow][j]);
            }
            // Left column
            for(int i = erow - 1; i >= srow + 1; i--) {
                if(scol == ecol) break;
                ans.push_back(matrix[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }

        return ans;
    }
};