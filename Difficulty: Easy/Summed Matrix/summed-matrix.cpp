
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        // brute force
        // int count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i+j==q) count++;
        //     }
        //     return count;
        // }
    long long left = max(1LL, (long long)q - n);
    long long right = min((long long)n, (long long)q - 1);
    if (right < left) {
        return 0;
    }
    return right - left + 1;
    }
};