//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        vector<long long>dp(n+ 1, 0);
        long long mod= 1000000007;
        dp[0]= 0;
        dp[1]= k%mod;
        dp[2]= ((k%mod)*(k%mod))%mod;
        for(long long i=3; i<=n; i++){
            dp[i]= (((dp[i- 1]+ dp[i- 2])%mod)*(k- 1)%mod)%mod;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends