//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
     vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            int ele = abs(arr[i])-1;
            if(arr[ele] < 0) {
                ans.push_back(ele+1);
            }
            else {
                arr[ele] = -1*arr[ele];
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans.push_back(i+1);
                break;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends