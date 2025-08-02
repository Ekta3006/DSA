// Last updated: 8/2/2025, 5:11:22 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        int n=a.size();
        int i=0, j=0;
        int p=a[0],c=0;
        while(i<n && j<n){
            if(p<k){
                j++;
                if(j>=i)
                    c+=j-i;
                if(j<n)
                    p*=a[j];
            }
            else{
                p=p/a[i];
                i++;
            }
        }
        return c;
    }
};