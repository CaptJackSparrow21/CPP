//https://takeuforward.org/practice/dsa/minimum-cost-to-cut-the-stick

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(m^3) && SC = O(m^2)
class Solution {
public:
    int minCost(int n, vector<int> &cuts) {
        cuts.push_back(0);
        cuts.push_back(n);

        sort(cuts.begin(), cuts.end());
        int m = cuts.size();

        vector<vector<int>> dp(m, vector<int> (m, 0));
        for(int len=2; len<m; len++) {
            for(int i=0; i+len<m; i++) {
                int j = i + len;
                dp[i][j] = INT_MAX;

                for(int k=i+1; k<j; k++) {
                    int cost = cuts[j] - cuts[i] 
                            + dp[i][k] + dp[k][j];

                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }
        return dp[0][m-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    vector<int> cuts;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            cuts.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.minCost(n, cuts);

    return 0;
}