//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string modify(string& s) {
        // code here.
         string ans ="";
        
        for(int i =0;i<s.length();i++){
            if(s[i] == ' '){
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.modify(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends