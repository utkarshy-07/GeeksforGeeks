class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < mn1){
                mn2 = mn1;
                mn1 = arr[i];
            }else if(arr[i] < mn2 && arr[i] != mn1){
                mn2 = arr[i];
            }
        }
        if(mn2 == INT_MAX) return {-1};
        return {mn1,mn2};
    }
};