// Last updated: 8/2/2025, 5:11:19 PM
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            if(abs(nums[i]-i) > 1)
                return false;
        }
        return true;
    }
};