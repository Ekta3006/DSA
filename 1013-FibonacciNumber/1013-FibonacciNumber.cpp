// Last updated: 8/2/2025, 5:11:08 PM
class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fib(n-1)+fib(n-2);
    }
};