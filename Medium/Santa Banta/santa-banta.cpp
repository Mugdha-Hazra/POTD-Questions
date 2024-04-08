//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Constant defining the maximum size of the array
const int maxn=1000001;

// Array for marking prime numbers
int a[maxn+1];

// Vector for storing prime numbers
vector<int> pl={2};

class Solution{
public:
    // Function to precompute the prime numbers
    void precompute(){
        // Marking all numbers as prime initially
        for(int i=1;i<=maxn;i++)
            a[i]=1;
        
        // Marking 0 and 1 as not prime
        a[0]=a[1]=0;
        
        // Sieve of Eratosthenes algorithm to mark non-prime numbers
        for(int i=2;i*i<=maxn;i++){
            if(a[i]==1){
                for(int j=i*i;j<=maxn;j+=i){
                    a[j]=0;
                }
            }
        }
        
        // Storing all the prime numbers in the vector
        for(int i=3;i<=maxn;i++)
            if(a[i])
                pl.push_back(i);
    }
    
    // Depth-first search function to find the number of reachable nodes in a graph
    int dfs(int i, vector<int> g[], vector<int> &vis){
        // Marking the current node as visited
        vis[i]=1;
        
        // Counter variable to keep track of the number of reachable nodes
        int cnt=1;
        
        // Recursively traversing all the adjacent nodes of the current node
        for(auto x:g[i]){
            if(!vis[x]){
                cnt+=dfs(x, g, vis);
            }
        }
        
        // Returning the total number of reachable nodes
        return cnt;
    }
    
    // Function to help Santa navigate the given graph
    int helpSanta(int n, int m, vector<vector<int>> &g)
    {
        // Initializing the visited array
        vector<int> vis(n+1, 0);
        
        // Creating an adjacency list for the given graph
        vector<int> adj[n + 1];
        for(auto i : g){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        // Variable to store the largest component size
        int lc=0;
        
        // Traversing all the nodes from 0 to n and finding the largest component
        for(int i = 0; i <= n; i++){
            if(!vis[i]){
                lc=max(lc,dfs(i, adj, vis));
            }
        }
        
        // Checking if there is only one component in the graph
        // If yes, returning -1
        if(lc==1)
            return -1;
        
        // Returning the prime number at the (largest component size - 1) index
        return pl[lc-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends
