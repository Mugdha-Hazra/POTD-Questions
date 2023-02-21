//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){  
        int firstcorner=x-1+y-1;
        int secondcorner=x-1+m-y;
        int thirdcorner=n-x+y-1;
        int fourthcorner=n-x+m-y;
        return max(max(firstcorner,secondcorner),max(thirdcorner,fourthcorner));
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends