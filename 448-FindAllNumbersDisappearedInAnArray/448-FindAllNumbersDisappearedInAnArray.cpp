// Last updated: 8/2/2025, 5:11:40 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> missing;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=abs(nums[i])-1;
            if(nums[temp]>0)
            nums[temp]=-nums[temp];
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)
            missing.push_back(i+1);
        }
        return missing;
    }
};