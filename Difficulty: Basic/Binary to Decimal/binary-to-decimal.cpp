class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
    int num=0;
    int base=1;
    for(int i=b.length()-1;i>=0;i--){
        if(b[i]=='1'){
            num+=base;
        }
        base*=2;
    }
    return num;
    }
};