class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
    //  int m=a.size();
    //  int n=b.size();
    //  for(int i=0;i<n;i++){
    //      bool flag=0;
    //      int curr=b[i];
    //      for(int j=0;j<m;j++){
    //          if(a[j]==curr) 
    //          flag=1;
    //          a[j]=-1;
    //          break; 
    //      }
    //   //  cout<<curr<<" "<<flag<<endl;
    //      if(flag==0) return false;
    //  }
    // return true; 
    //optimal
    int m=a.size();
    int n=b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    while(i< m && j < n){
        if(a[i]==b[j]){
            i++;
            j++;
        }else if(a[i] < b[j]){
            i++;
        }
        else{
            return false;
        }
    }
    if(j==n) return true;
    return false;
    }
};