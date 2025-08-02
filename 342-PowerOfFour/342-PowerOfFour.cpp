// Last updated: 8/2/2025, 5:11:44 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
         while(n > 1) {
            if(n % 4)return false;
            n /= 4;
        }
        return n == 1;
    }
};