// Last updated: 8/2/2025, 5:11:35 PM
class Solution {
public:
    int change(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        
        for (int coin : coins) {
            for (int j = coin; j <= amount; j++) {
                dp[j] += dp[j - coin];
            }
        }
        
        return dp[amount];
    }
};