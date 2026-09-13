//https://takeuforward.org/plus/dsa/problems/unbounded-knapsack?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * w) && SC = O(w)
class Solution {
public:
    int unboundedKnapsack(vector<int> &wt, vector<int> &val, int n, int W) {
        vector<int> dp(W + 1, 0);
        for(int c=0; c<=W; c++) {
            for(int i=0; i<n; i++) {
                if(wt[i] <= c)  
                    dp[c] = max(dp[c], dp[c - wt[i]] + val[i]);
            }
        }
        return dp[W];
    }
};

vector<int> getArray(string &s) {
    vector<int> ans;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            ans.push_back(stoll(temp));
            temp = "";
        }
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    getline(cin, s);
    getline(cin, t);
    int W; cin >> W;

    vector<int> val = getArray(s);
    vector<int> wt = getArray(t);
    int n = val.size();

    Solution sol;
    cout << sol.unboundedKnapsack(wt, val, n, W);

    return 0;
}