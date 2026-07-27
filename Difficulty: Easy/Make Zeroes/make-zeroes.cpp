class Solution {
  public:
    void makeZeros(vector<vector<int>>& mat) {
        // code here
         int n = mat.size();
        int m = mat[0].size();
       vector<vector<int>> temp = mat;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (temp[i][j] == 0) {
                    int up = 0, down = 0, left = 0, right = 0;
                    if (i >= 1)
                        up = temp[i - 1][j];
                    if (i < n - 1)
                        down = temp[i + 1][j];
                    if (j >= 1)
                        left = temp[i][j - 1];
                    if (j < m - 1)
                        right = temp[i][j + 1];
                    int sum = up + down + left + right;
                    mat[i][j] = sum;
                    if (i >= 1)
                        mat[i - 1][j] = 0;
                    if (i < n - 1)
                        mat[i + 1][j] = 0;
                    if (j >= 1)
                        mat[i][j - 1] = 0;
                    if (j < m - 1)
                        mat[i][j + 1] = 0;
                }
            }
        }
    }
};