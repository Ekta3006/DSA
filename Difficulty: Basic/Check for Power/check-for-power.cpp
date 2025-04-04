//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int isPowerOfAnother(int X, int Y) {
        // code here
        if(Y == 1 || Y == X)return 1;
        if(X == 1) return 0;
        for(int i=1;i<Y;i++){
            if(pow(X,i)==Y)
            return 1;
        }
        return 0;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y;
        cin >> X >> Y;
        Solution ob;
        bool ans = ob.isPowerOfAnother(X, Y);

        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends