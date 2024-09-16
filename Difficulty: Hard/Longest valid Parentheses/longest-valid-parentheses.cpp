//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      int maxLength(string& str) {
        int max_length = 0;
        stack<int> st;
        st.push(-1);
        
        for(int i=0;i<str.length();i++){
            if(str[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    max_length = max(max_length,i - st.top());
                }
                // ) stack empty bhi ha or closing bracket aye ha to  usko dla denge
                else{
                    st.push(i);
                }
            }
        }
        return max_length;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends