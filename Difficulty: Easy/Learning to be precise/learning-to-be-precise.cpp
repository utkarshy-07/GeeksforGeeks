class Solution {
  public:
    void precise(float a, float b) {
        // code here
        double result = (a / b) ;
    cout << fixed << setprecision(3) << result << endl;
    }
};