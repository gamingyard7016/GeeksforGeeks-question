class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for (int i=0;i+1<arr.size();i++){
            if(arr[i] > arr[i+1]) return false;
        }
        return true;
    }
};