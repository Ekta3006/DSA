//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int a[], int b[], int n, int m, int x) {
        vector <int> v;
        int d= INT_MAX;
        int i=0,j=m-1;
        while(i<n && j>=0){
            if(abs(a[i]+b[j]-x)<d){
            d=abs(a[i]+b[j]-x);
            v={a[i],b[j]};
        }
        if((a[i]+b[j])>x)
        j--;
        else
        i++;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends