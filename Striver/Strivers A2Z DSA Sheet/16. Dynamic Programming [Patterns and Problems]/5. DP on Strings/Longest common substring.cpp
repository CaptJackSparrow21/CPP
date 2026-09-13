//https://takeuforward.org/plus/dsa/problems/longest-common-substring?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * m) && SC = O(m)
class Solution {
public:
    int longestCommonSubstr(string str1, string str2) {
        int n = str1.size(), m = str2.size();
        vector<int> prev(m+1, 0);
        int ans = 0;
        for(int i=1; i<=n; i++) {
            vector<int> curr(m+1, 0);
            for(int j=1; j<=m; j++) {
                if(str1[i-1] == str2[j-1]) {
                    curr[j] = prev[j-1] + 1;
                    ans = max(ans, curr[j]);
                }
            }
            prev = curr;
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;
    Solution sol;
    cout << sol.longestCommonSubstr(str1, str2);

    return 0;
}