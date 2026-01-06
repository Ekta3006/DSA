// Last updated: 1/6/2026, 11:55:04 AM
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int c=0;
    for(int i=2;i<n;i++){
        if(prime[i]==true)
        c++;
    }
    return c;
    }
};