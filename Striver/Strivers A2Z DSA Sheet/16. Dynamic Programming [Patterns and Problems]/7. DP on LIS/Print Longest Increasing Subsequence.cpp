//https://takeuforward.org/plus/dsa/problems/print-longest-increasing-subsequence?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    vector<int> longestIncreasingSubsequence(vector<int> &arr) {
        int n = arr.size();
        vector<int> dp(n, 1);

        for(int i=n-1; i>=0; i--) 
            for(int j=i+1; j<n; j++)
                if(arr[i] < arr[j])
                    dp[i] = max(dp[i], 1 + dp[j]);

        int len = *max_element(dp.begin(), dp.end());
        vector<int> ans;
        int prev = INT_MIN;

        
        
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}