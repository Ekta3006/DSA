class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
	int start = 0, end = n - 1;
	int ans = INT_MIN;
	while (start < end) {
		ans = max(ans, min(h[start], h[end]) * (end - start));
		if (h[start] < h[end]) start++;
		else end--;
	}
	return ans;
 
    }
};