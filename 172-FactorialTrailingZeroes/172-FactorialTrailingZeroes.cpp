// Last updated: 8/2/2025, 5:11:57 PM
class Solution {
public:
    int trailingZeroes(int n) {
        if (n < 0) // Negative Number Edge Case
		return -1;

	// Initialize result
	int c = 0;

	for (int i = 5; n / i >= 1; i *= 5)
		c += n / i;

	return c;
    }
};