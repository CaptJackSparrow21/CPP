//https://takeuforward.org/plus/dsa/problems/print-longest-increasing-subsequence?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) && SC = O(n)
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

        for(int i=0; i<n && len > 0; i++) {
            if(arr[i] > prev && dp[i] == len) {
                ans.push_back(arr[i]);
                prev = arr[i];
                len--;
            }
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> arr;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            arr.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    vector<int> ans = sol.longestIncreasingSubsequence(arr);
    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << (i+1 == ans.size() ? "" : ",");
    }
    cout << ']';

    return 0;
}