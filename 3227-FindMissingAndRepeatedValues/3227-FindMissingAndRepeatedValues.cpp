// Last updated: 1/6/2026, 11:54:26 AM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> v;
        int t = n * n;

        long long es = 1LL * t * (t + 1) / 2;
        long long esos = 1LL * t * (t + 1) * (2 * t + 1) / 6;

        long long as = 0, asos = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                as += grid[i][j];
                asos += 1LL * grid[i][j] * grid[i][j];
            }
        }

        long long diff1 = as - es;           // a - b
        long long diff2 = asos - esos;       // a^2 - b^2

        long long sum_ab = diff2 / diff1;    // a + b

        int a = (diff1 + sum_ab) / 2;        
        int b = a - diff1;                   

        v.push_back(a);
        v.push_back(b);
        return v;
    }
};
