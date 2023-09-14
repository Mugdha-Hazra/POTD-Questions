//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string s;
        if (S > N*9 || N > 1 && S == 0) {  // Covering the edge cases
            return "-1";
        }

      // Applying greedy approach to reach the solution
        while (N > 0) {
            if (S == 0) {
                s += '0';
            }
            else if (S > 9) {
                s += '9';
                S -= 9;
            }
            else {
                s += ('0'+ S);
                S = 0;
            }
            N--;
        } 
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends