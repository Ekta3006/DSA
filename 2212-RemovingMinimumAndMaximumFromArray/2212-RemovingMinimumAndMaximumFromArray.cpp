// Last updated: 8/2/2025, 5:10:41 PM
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int n = nums.size();
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; ++i) {
        if (nums[i] < nums[minIdx]) minIdx = i;
        if (nums[i] > nums[maxIdx]) maxIdx = i;
    }
    if (minIdx > maxIdx) swap(minIdx, maxIdx);
    int front = maxIdx + 1;
    int back = n - minIdx;
    int mix1 = (minIdx + 1) + (n - maxIdx);
    int mix2 = (maxIdx + 1) + (n - minIdx);

    return min({front, back, mix1, mix2});

    }
};