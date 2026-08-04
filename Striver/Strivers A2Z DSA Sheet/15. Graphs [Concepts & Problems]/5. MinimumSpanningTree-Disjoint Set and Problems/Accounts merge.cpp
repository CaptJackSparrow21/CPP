//https://takeuforward.org/plus/dsa/problems/accounts-merge?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    unordered_map<string, vector<string>> G;
    unordered_set<string> seen;
    vector<vector<string>> ans;

    void dfs(string &email) {
        seen.insert(email);
        ans.back().push_back(email);
        for(auto &adjEmail : G[email])
            if(!seen.count(adjEmail))
                dfs(adjEmail);
    }

    vector<vector<string>> accountsMerge(vector<vector<string>> accounts) {
        for(auto &acc : accounts)
            for(int i=2; i<size(acc); i++)
                G[acc[i]].push_back(acc[i-1]),
                G[acc[i-1]].push_back(acc[i]);

        for(auto &acc : accounts)
            if(!seen.count(acc[1])) {
                ans.push_back({acc[0]});
                dfs(acc[1]);
                sort(begin(ans.back()) + 1, end(ans.back()));
            }
        return ans;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++) {

        int m;
        cin >> m;

        vector<string> acc;

        for (int j = 0; j < m; j++) {
            string s;
            cin >> s;
            acc.push_back(s);
        }

        accounts.push_back(acc);
    }

    Solution obj;

    vector<vector<string>> ans = obj.accountsMerge(accounts);

    for (auto &v : ans) {
        cout << "[ ";
        for (auto &x : v)
            cout << x << " ";
        cout << "]\n";
    }

    return 0;
}