//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>>& matrix)
    {
        // code here
        vector<int> gold(m,0);
        int ans=INT_MIN;
        for(int i=m-1;i>=0;i--){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                int g=matrix[j][i];
                if(i+1<m) g+=gold[j];
                if(i+1<m && j-1>=0) g=max(matrix[j][i]+gold[j-1],g);
                if(i+1<m && j+1<n) g=max(matrix[j][i]+gold[j+1],g);
                ans=max(ans,g);
                temp[j]=g;
            }
            gold=temp;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends