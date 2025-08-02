// Last updated: 8/2/2025, 5:12:29 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid / n][mid % n];

            if (mid_val == target)
                return true;
            else if (mid_val < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
    
};