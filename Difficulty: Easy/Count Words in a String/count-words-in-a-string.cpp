class Solution {
  public:
    int countWords(string &s) {
        // code here
        int count = 0;
        bool in = false;
        for(char ch : s){
            if(ch !=' ' && ch !='\n' && ch !='\t'){
                if(!in){
                    count++;
                    in = true;
                }
            }else{
                in = false;
            }
        }
        return count;
    }
};