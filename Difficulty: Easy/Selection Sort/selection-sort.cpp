class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for (int i = 0 ; i < n - 1 ; i++){
            int current = i;
        for ( int j = i + 1; j  < n ; j++){
            if(arr[j] < arr[current]){
                current = j;
            }
        }
        
        swap(arr[i],arr[current]);
            
        }
    }
};