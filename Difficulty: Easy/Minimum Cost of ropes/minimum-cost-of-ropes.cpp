//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
      long long count=0;
      priority_queue<long long,vector<long long>, greater<long long>> q;
      for(auto x:arr)
      q.push(x);
      while(q.size()!=1)
      {
          int first=q.top();
          q.pop();
          int second=q.top();
          q.pop();
          int sum=first+second;
          q.push(sum);
          count+=first+second;
      }
      return count;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends