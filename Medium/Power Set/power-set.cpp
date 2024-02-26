//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<string>st;

    void solve(int i, string &s, string subseq) {
        if (i == s.length()) {
            if (subseq == "") return;
            st.push_back(subseq);
            return;
        }
            solve(i + 1, s, subseq + s[i]);
            solve(i + 1, s, subseq);
    }

    vector<string> AllPossibleStrings(string s) {
        solve(0, s, "");
        sort(st.begin(),st.end());
        return st;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends