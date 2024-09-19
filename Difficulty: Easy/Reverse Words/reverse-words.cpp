//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int n=str.length();
        string res="";
        string ans="";
        for(int i=n-1;i>=0;i--){
            char ch=str[i];
            if(ch=='.'){
                reverse(res.begin(),res.end());
                ans+=res;
                ans+='.';
                res="";
            }
            else{
                res+=ch;
            }
            
        }
        reverse(res.begin(),res.end());
        return ans+res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends