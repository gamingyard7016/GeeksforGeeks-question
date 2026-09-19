class Solution {
  public:
    int nthDay(int d, int n) {
        // subtract n days and wrap around using modulo
        int ans = ((d - n) % 7 + 7) % 7;
        // if(ans == 0) ans = 7;  // Sunday case
        return ans;
    }
};
