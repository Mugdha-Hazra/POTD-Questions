//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
     long maximumSumSubarray(int K, vector<int> &arr , int N){        // code here 
        long long i=0, sum=0; 
        while(i<K){
            sum += arr[i];
            i++;
        }
        
        long long j=0;
        long long newSum=sum;
        while(i<N){
            newSum=newSum+arr[i]-arr[j];
            if(newSum > sum) sum = newSum;
            j++;
            i++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends