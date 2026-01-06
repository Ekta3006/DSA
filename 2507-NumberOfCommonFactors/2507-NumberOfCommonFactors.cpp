// Last updated: 1/6/2026, 11:54:27 AM
class Solution {
public:
    int commonFactors(int a, int b) {
        int n=gcd(a,b);
        int c=0;
        for(int i=1;i<=n;i++){
            if(a%i==0 && b%i==0)
            c++;
        }
    return c;
    }
};