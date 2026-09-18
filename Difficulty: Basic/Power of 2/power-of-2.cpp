class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        return n > 0 && (n & (n - 1)) == 0;
        
    }
};