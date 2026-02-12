//https://leetcode.com/problems/distinct-subsequences-ii/description/?utm=codolio

#include<bits/stdc++.h>
using namespace std;

//TC = O(n) & SC = O(1)
class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        vector<long long> ends(26, 0);
        long long total = 0;

        for(char ch : s) {
            int idx = ch - 'a';
            long long new_ends = (total + 1) % MOD;
            total = (total + new_ends - ends[idx] + MOD) % MOD;
            ends[idx] = new_ends;
        }
        return total;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.distinctSubseqII(s) << endl;

    return 0;
}