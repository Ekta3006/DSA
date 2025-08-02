// Last updated: 8/2/2025, 5:12:13 PM
class Solution {
public:
    int maxProfit(vector<int>& p) {
             int n = p.size();
        int profit = 0, maxM = p.back();
        for(int i = n-1; i >= 0; i--)
        {
            profit = max(profit, maxM-p[i]);
            maxM = max(maxM, p[i]);
        }
        return profit;
        
    }
};