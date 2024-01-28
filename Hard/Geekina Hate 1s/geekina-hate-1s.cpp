//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long ncr(int n, int r)
    {
        long long p = 1, k = 1;
        if (n - r < r)
            r = n - r;
        if (r != 0) {
            while (r) {
                p *= n;
                k *= r;
                long long m = __gcd(p, k);
                p /= m;
                k /= m;
                n--;
                r--;
            }
        }
        else p = 1;
        return p;
    }
    long long check(long long num, int k){
        long long ans = 0;
        for(int i=63; i>=0; i--){
            if(num & (1LL << i)){
                if(k == 0) break;
                for(int j=0; j<=min(i, k); j++){
                    ans += ncr(i, j);
                }
                k--;
            }
        }
        return ans + 1;
    }
    long long findNthNumber(int n, int k) {
        long long s = 1, e = 1e15;
        long long ans = 0;
        while(s <= e){
            long long mid = s + (e - s) / 2;
            if(check(mid, k) >= n){
                ans = mid;
                e = mid - 1;
            }else s = mid + 1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        Solution obj;
        long long res = obj.findNthNumber(n, k);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends