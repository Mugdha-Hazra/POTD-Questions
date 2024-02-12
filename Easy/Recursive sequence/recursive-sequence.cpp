//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    const int MOD = 1e9+7;
    long long solution(int n, int i, int ans, int ind) {
        long long mul = 1;
        if (i > n)
            return ans % MOD;
        for (int j = 0; j < i; j++) {
            mul = (mul * ind) % MOD;
            ind++;
        }
        ans = (ans + mul) % MOD;
        i++;
        return solution(n, i, ans, ind);
    }

    long long sequence(int n) {
        return solution(n, 1, 0, 1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends