class Solution {
  public:
    int maxStep(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0 ;
        int ans = 0 ;
        for(int i = 0 ; i < n - 1 ; i++){
            if(arr[i] < arr[i + 1]){
                count++;
                ans = max(ans,count);
            }else{
                count = 0;
            }
        }
        return ans;
    }
};