// Last updated: 8/2/2025, 5:12:11 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int h = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            h ^= nums[i];
        }   
    return h;
    }
};