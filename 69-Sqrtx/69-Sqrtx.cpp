// Last updated: 8/2/2025, 5:12:34 PM
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
        return 0;
    int left = 1, right = INT_MAX;
    while (true) {
        int mid = left + (right - left)/2;
        if (mid > x/mid) {
            right = mid - 1;
        } else {
            if (mid + 1 > x/(mid + 1))
                return mid;
            left = mid + 1;
        }
    }
    }
};