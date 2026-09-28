//https://takeuforward.org/practice/dsa/partition-array-for-maximum-sum

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * k) && SC = O(k)
class Solution {
public:
    int maxSumAfterPartitioning(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1, 0);

        for(int i=1; i<=n; i++) {
            int mx = 0;
            for(int len=1; len<=k && len<=i; len++) {
                mx = max(mx, arr[i - len]);
                dp[i] = max(dp[i], dp[i-len] + mx * len);
            }
        }
        return dp[n];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int k; cin >> k;

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
    cout << sol.maxSumAfterPartitioning(arr, k);

    return 0;
}