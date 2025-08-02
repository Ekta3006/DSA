// Last updated: 8/2/2025, 5:12:49 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};