class Solution {
	public:
	bool armstrongNumber(int n) {
		// code here
		
		if (n>99 || n<1000) {
			int s = n;
			int ans = 0;
			
			while (s > 0) {
				int dig = s % 10; // last digit
				ans += dig * dig * dig; // cube of digit
				s = s / 10;
			}
			return (ans == n);
		}
		else
			return false;
		
	}
};
