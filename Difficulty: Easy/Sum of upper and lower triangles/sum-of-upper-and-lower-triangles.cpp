class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int lower=0;
        int upper=0;
        for(int i =0 ;i < n;i++){
            for(int j=0 ;j < n;j++){
                if(i <=j) upper+=mat[i][j];
                if(i >= j) lower+=mat[i][j];
            }
        }
    return {upper,lower};
    }
};
