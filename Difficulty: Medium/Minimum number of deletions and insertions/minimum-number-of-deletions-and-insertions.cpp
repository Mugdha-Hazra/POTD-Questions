//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
int solve(string &str1,string &str2,int n,int m,int i,int j,vector<vector<int>>&dp){
    if(i>=n || j>=m)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int ans=0;
    if(str1[i]==str2[j])
    ans=1+solve(str1,str2,n,m,i+1,j+1,dp);
    else
    ans=max(solve(str1,str2,n,m,i+1,j,dp),solve(str1,str2,n,m,i,j+1,dp));
    return dp[i][j]=ans;
}
int minOperations(string str1, string str2) 
{ 
    // Your code goes here
    int n=str1.length();
    int m=str2.length();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int len=solve(str1,str2,n,m,0,0,dp);
    return n+m-2*len;
} 

};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends