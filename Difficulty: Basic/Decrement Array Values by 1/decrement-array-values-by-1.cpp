class Solution {
  public:
    int* decrementArray(int arr[], int n) {
        // Code here
        for(int i=0;i<n;i++){
            arr[i] = arr[i]-1;
        }
        return arr;
    }
};