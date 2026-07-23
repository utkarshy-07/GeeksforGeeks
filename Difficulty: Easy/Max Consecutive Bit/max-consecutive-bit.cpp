class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int count1=0;
        int count2=0;
        int mx=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
            count1=0;
            count2++;
            mx=max(mx,count2);
        }else if(arr[i]==1){
        count2=0;
        count1++;
        mx=max(mx,count1);
        }
      }
        return mx;
    }
};