//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n = str.size();
        vector<int> kmp(n+1);
        int i=0,j=-1;
        kmp[0] = -1;
        while(i < n){
            while(j != -1 && str[j] != str[i]){
                j = kmp[j];
            }
            j++,i++;
            kmp[i] = j;
        }
        return kmp[n];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends