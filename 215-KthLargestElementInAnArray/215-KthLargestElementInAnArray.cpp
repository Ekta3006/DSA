// Last updated: 8/2/2025, 5:11:53 PM
class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
         int n=arr.size();
    sort(arr.begin(),arr.end());   
    return arr[n-k];
    }
};