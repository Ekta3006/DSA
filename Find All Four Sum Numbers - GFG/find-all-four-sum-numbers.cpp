//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
    vector<vector<int> > v;
    vector <int> q;
    set<vector<int>> p;
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int l=j+1;
            int r=n-1;
            while(l<r){
                int s=a[i]+a[j]+a[l]+a[r];
                if(s==k){
                    q={a[i],a[j],a[l],a[r]};
                    p.insert(q);
                    r--;
                    l++;
                }
                else if(s>k)
                r--;
                else
                l++;
            }
        }
    }
        for(auto x: p){
            v.push_back(x);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends