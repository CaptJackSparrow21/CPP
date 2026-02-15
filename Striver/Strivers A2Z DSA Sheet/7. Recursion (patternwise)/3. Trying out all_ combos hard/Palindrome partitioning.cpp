//https://takeuforward.org/plus/dsa/problems/palindrome-partitioning

#include<bits/stdc++.h>
using namespace std;

//TC = O(n^2) && SC = O(n)
class Solution{
public:
    vector<vector<string>> ans;
    vector<string> path;
    vector<vector<bool>> dp;

    void backtrack(string &s, int start) {
        if(start == s.size())  {
            ans.push_back(path);
            return;
        }

        for(int end=start; end<s.size(); end++) {
            if(dp[start][end]) {
                path.push_back(s.substr(start, end - start + 1));
                backtrack(s, end + 1);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        ans.clear();    //clear previous test case data
        path.clear();   //clear previous recursion path

        int n = s.size();
        dp.assign(n, vector<bool> (n, false));

        for(int i=n-1; i>=0; i--) {
            for(int j=i; j<n; j++) {
                if(s[i] == s[j] && (j-i <= 2 || dp[i+1][j-1])) {
                    dp[i][j] = true;
                }
            }
        }

        backtrack(s, 0);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    if(s.size() >= 2 && s.front() == '"' && s.back() == '"') {
        s = s.substr(1, s.size() - 2);
    }

    Solution sol;
    vector<vector<string>> ans = sol.partition(s);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"" ;
            cout << ((j+1) == ans[i].size() ? "" : ",");
        }
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}