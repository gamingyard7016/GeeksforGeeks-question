class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int> ans;

        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                ans.push_back(i);          // divisor
                if(i != n / i) {           // avoid duplicate when i == n/i
                    ans.push_back(n / i);  // paired divisor
                }
            }
        }

        sort(ans.begin(), ans.end()); // divisors in ascending order
        return ans;
    }
};
