//https://takeuforward.org/plus/dsa/problems/accounts-merge?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> accounts) {
        
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