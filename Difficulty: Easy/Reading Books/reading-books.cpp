class Solution {
public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
       int mx = 0;
        int n = arr1.size();
        for (int i= 0; i< n; i++) {
            int a = k/arr1[i];
            int b = a*arr2[i];
            mx = max(mx,b);
        }
        return mx;
    }
};