//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& a, int t) {
      sort(a.begin(),a.end());
      int l=0,h=a.size()-1;
      while(l<h)
      {
          if((a[l]+a[h])>t)
          h--;
          else if((a[l]+a[h])<t)
          l++;
          else if((a[l]+a[h])==t)
          return true;
      }
      return false;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        int x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends