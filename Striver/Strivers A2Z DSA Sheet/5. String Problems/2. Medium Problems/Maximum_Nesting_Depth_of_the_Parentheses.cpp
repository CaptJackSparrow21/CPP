#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, ans = 0;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            if(c == '(') {
                depth++;
                ans = max(ans, depth);
            }
            else if(c == ')') depth--;
        }
        return ans;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.maxDepth(s) << endl;

    return 0;
}