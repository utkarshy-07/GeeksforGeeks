class Solution {
  public:
    int maxZeros(vector<vector<int>> arr) {
        // code here
        int n = arr.size();
        int ans= -1;
        int Zeros= 0;
        for(int j=0 ; j < n; j++){
            int count=0;
            for(int i=0 ; i < n ; i++){
                if(arr[i][j]==0){
                    count++;
                }
            }
            if(count > Zeros){
            Zeros = count;
            ans = j;
            }
        }
    return ans;
    }
};