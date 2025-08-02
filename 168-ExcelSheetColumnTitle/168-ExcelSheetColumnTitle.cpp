// Last updated: 8/2/2025, 5:12:00 PM
class Solution {
public:
    string convertToTitle(int N) {
        if(N<27)
        return string(1, 'A' + (N - 1) % 26);
        
        
        string c = "";
       while (N > 0) {
            if (N % 26 == 0) {
                c += 'A' + 25;
                N -= 1;
            } else {
                c += 'A' + N % 26 - 1;
            }
            N/= 26;
        }
        std::reverse(c.begin(), c.end());
        return c;  
    }
};