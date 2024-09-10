//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isCircle(vector<string> &arr) {
        int n = arr.size();
        vector<int> adj[26];
        vector<int> inDegree(26,0),outDegree(26,0);
        vector<bool>mark(26,false);
        
        for(int i=0; i<n; i++){
            int u = arr[i][0]-'a';
            int v = arr[i].back()-'a';
            
            adj[u].push_back(v);
            
            inDegree[u]++;
            outDegree[v]++;
            
            mark[u]=mark[v]=true;
        }
        
        if(inDegree != outDegree) return false;
        
        queue<int>q;
        vector<bool> vis(n,false);
        q.push(arr[0][0]-'a');
        
        while(!q.empty()){
            int node = q.front();
            vis[node] = true;
            q.pop();
            for(int adjNode : adj[node]){
                if(vis[adjNode] == true) continue ;
                q.push(adjNode);
            }
        }
        
        for(int i=0; i<26; i++){
            if(mark[i] == true && vis[i] == false)
                return false;
        }
        
        return true;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends