class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        // int n = arr.size();
        // int count = 0;
        // int ans = INT_MIN;
        // for (int i = 0; i < n; i++) {
        //     int next_count = 0;
        //     for (int j = 0; j < n ; j++) {
        //         if (arr[j] == arr[i]) {
        //             next_count++;
        //         }
        //     }
        //     if (next_count > count) {
        //         count = next_count;
        //         ans = arr[i];
        //     } else if (next_count == count) {
        //         ans = max(ans, arr[i]);
        //     }
        // }

        // return ans;
        
        // || optimal ||
        sort(arr.begin(),arr.end());

        int ans=-1e9;
        int cntmx=-1e9;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int curr=arr[i];
            int j=i;
            int cnt=0;
            while(j<n&&arr[j]==curr){
                j++;
                cnt++;
            }
           // cout<<cnt<<" "<<curr<<endl;
            if(cnt==cntmx){
                ans=max(ans,curr);
                cntmx=cnt;
            }
            if(cnt>cntmx){
                ans=curr;
                cntmx=cnt;
            }
            i=j-1;
        }
        return ans;

    }
};