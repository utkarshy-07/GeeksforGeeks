class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] <= arr[i - 1]) {
                int update = arr[i - 1] + 1;
                count += (update - arr[i]);
                arr[i] = update;
            }
        }
        return count;
    }
};