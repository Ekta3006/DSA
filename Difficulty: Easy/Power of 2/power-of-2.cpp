class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        if((n&(n-1))==0)
        return true;
        else
        return false;
    }
};