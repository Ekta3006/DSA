// Last updated: 8/2/2025, 5:11:58 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int e=0;
        for(int i=0;i<n;i++){
            if(c==0)
                e=nums[i];
            if(e==nums[i])
                c+=1;
            else
                c-=1;
        }
        return e;
    }
};