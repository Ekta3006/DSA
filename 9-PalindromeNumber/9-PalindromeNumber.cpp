// Last updated: 8/2/2025, 5:13:04 PM
class Solution {
public:
    int reverse(int x) {
         int ans = 0;
         if(x<0)
         return 0;
        while (x != 0){
            int digit = x % 10;
            if (ans > INT_MAX / 10 | ans < INT_MIN / 10) 
            return 0; 
            else{
                ans = ans * 10 + digit;
                x /= 10;
            }
        }
        return ans;
    }
    bool isPalindrome(int x) {
        int a=reverse(x);
        if(x==a)
        return true;
        else
        return false;
    }
};