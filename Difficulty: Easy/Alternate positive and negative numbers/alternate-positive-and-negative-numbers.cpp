//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {

  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int>a;
        vector<int>b;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                a.push_back(arr[i]);
            }
            else
            {
               b.push_back(arr[i]); 
            }
        }
        arr.clear();
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m)
        {
           if(k%2==0)
           {
               arr.push_back(a[i]);
               i++;
           }
           else 
           {
               arr.push_back(b[j]);
               j++;
           }
           k++;
        }
        while(i<n)
        {
            arr.push_back(a[i]);
            i++;
        }
         while(j<m)
        {
            arr.push_back(b[j]);
            j++;
        }
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends