

class Solution {
  public:
    string FindGcd(long long int N, int x, int y) {
        // Code here
       int g = std::gcd(x, y);     // sirf x,y ka gcd
        string d = to_string(N);
        string ans;

        while(g--) ans += d;

        return ans;
    }
};