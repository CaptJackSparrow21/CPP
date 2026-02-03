//https://takeuforward.org/plus/dsa/problems/generate-binary-strings-without-consecutive-1s

#include<bits/stdc++.h>
using namespace std;

//TC = O(2^n) & SC = O(n)
class Solution {
    void gen(int pos, int n, int prevOne, 
            string &curr, vector<string> &ans) {
        if(pos == n) {
            ans.push_back(curr);
            return;
        }

        curr[pos] = '0';
        gen(pos + 1, n, 0, curr, ans);
        if(!prevOne) {
            curr[pos] = '1';
            gen(pos + 1, n, 1, curr, ans);
        }
    }

public:
    vector<string> generateBinaryStrings(int n) {
        vector<string> ans;
        string curr(n, '0');
        gen(0, n, 0, curr, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;
    vector<string> ans = sol.generateBinaryStrings(n);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}