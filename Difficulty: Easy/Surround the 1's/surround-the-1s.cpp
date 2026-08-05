
class Solution {
  public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 0)
                    continue;

                int count = 0;

                // Up
                if(i > 0){
                    if(matrix[i - 1][j] == 0){
                        count++;
                    }
                }

                // down
                if(i < n - 1){
                    if(matrix[i + 1][j] == 0){
                        count++;
                    }
                }
                // left
                if(j > 0){
                    if(matrix[i][j - 1] == 0){
                        count++;
                    }
                }

                // right
                if(j < m - 1){
                    if(matrix[i][j + 1] == 0){
                        count++;
                    }
                }
                // top left
                if(i > 0 && j > 0){
                    if(matrix[i - 1][j - 1] == 0){
                        count++;
                    }
                }
                // top right
                if(i > 0 && j < m - 1){
                    if(matrix[i - 1][j + 1] == 0){
                        count++;
                    }
                }
                // bottom left
                if (i < n - 1 && j > 0){
                    if (matrix[i + 1][j - 1] == 0){
                        count++;
                    }
                }
                // bottom right
                if(i < n - 1 && j < m - 1){
                    if(matrix[i + 1][j + 1] == 0){
                        count++;
                    }
                }

                if(count > 0 && count % 2 == 0)
                    ans++;
            }
        }

        return ans;
    }
};