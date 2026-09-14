class Solution {
	public:
	bool isPrime(int n) {
		// code here
		if (n <= 1) return false; // 1 और negative prime नहीं होते
		if (n == 2 || n == 3) return true; // 2 और 3 prime हैं
		if (n % 2 == 0) return false; // even numbers prime नहीं होते (except 2)
		
		// check only odd divisors up to sqrt(n)
		for (int i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0)
				return false;
		}
		return true;
	}
};
