//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minSteps(int N) 
	{ 
	    // Your code goes here
	    int dp[N+1]={0};
	     dp[1]=0;
	     dp[2]=1;
	     dp[3]=1;
	    for(int i=4;i<=N;i++){
	        if(i%2==0 && i%3==0)
           {
               dp[i]=1+min(min(dp[i/2],dp[i/3]),dp[i-1]);
           }
	        else if(i%2==0){
	            dp[i]=1+min(dp[i-1],dp[i/2]);
	        }
	        else if(i%3==0){
	            dp[i]=1+min(dp[i-1],dp[i/3]);
	        }
	        else
	        dp[i]=dp[i-1]+1;
	    }
	     if(dp[N]!=-1) return dp[N];
	    return dp[N];
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends