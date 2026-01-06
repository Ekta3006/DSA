// Last updated: 1/6/2026, 11:54:31 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> v;
        v.reserve(nums.size() * 2);

        v.insert(v.end(), nums.begin(), nums.end());
        v.insert(v.end(), nums.begin(), nums.end());

        return v;
    }
};