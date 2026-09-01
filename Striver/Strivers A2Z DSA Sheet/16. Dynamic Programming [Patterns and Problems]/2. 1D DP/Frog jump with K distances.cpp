//https://takeuforward.org/plus/dsa/problems/frog-jump-with-k-distances?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
//#define int long long

//TC = O(n * k) && SC = O(n)
class Solution {
public:
    int frogJump(vector<int> &heights, int k) {
        int n = heights.size();

        vector<int> dp(n, INT_MAX);
        dp[0] = 0;

        for(int i=1; i<n; i++) {
            for(int j=max(0, i-k); j<i; j++) {
                dp[i] = min(dp[i], 
                            dp[j] + abs(heights[i] - heights[j]));
            }
        }
        return dp[n-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int k; cin >> k;

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<int> heights;
    string temp;
    stringstream ss(s);
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            heights.push_back(stoll(temp));
    }

    Solution sol;
    cout << sol.frogJump(heights, k);

    return 0;
}