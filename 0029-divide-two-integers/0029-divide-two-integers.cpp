class Solution {
public:
    int divide(int a, int b) {
        if (b == 1) {
            return a;
        }
        if (a == INT_MIN && b == -1) {
            return INT_MAX;
        }

        bool sign;
        if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
            sign = true;
        } else {
            sign = false;
        }

        
        if (a > 0) {
            a = -a;
        }
        if (b > 0) {
            b = -b;
        }

        int ans = 0;
        while (a <= b) {
            int x = b;
            int cnt = 1;
            while (x >= (INT_MIN >> 1) && a <= (x << 1)) {
                x <<= 1;
                cnt <<= 1;
            }
            ans += cnt;
            a -= x;
        }

        
        if (sign) {
            return ans;
        } else {
            return -ans;
        }
    }
};
