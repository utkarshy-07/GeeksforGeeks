class Solution {
  public:
  int fact(int x){
       if(x==0||x==1) return 1;
       return x*fact(x-1);
   }
    int factorial(int n) {
        // code here
       return fact(n);
    }
};