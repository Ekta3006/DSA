// Last updated: 1/6/2026, 11:55:22 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] != 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        if(digits[0] == 0) {
            vector<int> arr(n + 1, 0);
            arr[0] = 1;
            return arr;
        }
        return digits;
    }
};