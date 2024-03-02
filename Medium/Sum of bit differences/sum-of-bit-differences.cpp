//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    
    long long sumBitDifferences(int arr[], int n) {
        // code here
        long long ans=0;
        for(int i=0;i<32;i++){
            long long  z=0;
             long long o=0;
            for(int j=0;j<n;j++){
                //cout<<arr[j]>>i<<endl;
                if((1<<i & arr[j]) ==0)z++;
                else o++;
            }
            //cout<<o<<" "<<z<<endl;
            ans+=(z*o);
        }
        return 2*ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends