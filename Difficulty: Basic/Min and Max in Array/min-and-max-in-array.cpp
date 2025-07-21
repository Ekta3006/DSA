// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        pair<int,int> v;
        int max=arr[0];
        int min=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max)
            max=arr[i];
        }
         for(int i=1;i<arr.size();i++){
            if(arr[i]<min)
            min=arr[i];
        }
        v.first=min;
        v.second=max;
        return v;
    }
};