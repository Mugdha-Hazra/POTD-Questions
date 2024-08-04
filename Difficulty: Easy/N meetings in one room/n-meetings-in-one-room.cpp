//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
   int maxMeetings(int n, int start[], int end[]) {
    // Store meetings as pairs of (end time, start time)
    vector<pair<int,int>> meet(n);
    for(int i = 0; i < n; i++) {
        meet[i] = {end[i], start[i]};
    }
    
    // Sort meetings by end time
    sort(meet.begin(), meet.end());
    
    // Initialize count of meetings and track last meeting's end time
    int count = 1;
    int time = meet[0].first;
    
    // Check if subsequent meetings can be attended
    for(int i = 1; i < n; i++) {
        if(meet[i].second > time) {
            count++;          // Increment count if meeting can be attended
            time = meet[i].first; // Update end time to current meeting's end time
        }
    }
    
    return count; // Return the maximum number of non-overlapping meetings
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends