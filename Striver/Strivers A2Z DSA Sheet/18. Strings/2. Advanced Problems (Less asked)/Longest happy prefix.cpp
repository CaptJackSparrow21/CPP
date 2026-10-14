//https://takeuforward.org/practice/dsa/longest-happy-prefix

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    string lps(string s) {
        int n = s.size();
        vector<int> pr(n, 0);

        for(int i=1; i<n; i++) {
            int j = pr[i - 1];
            
            while(j > 0 && s[i] != s[j])
                j = pr[j - 1];

            if(s[i] == s[j])
                j++;

            pr[i] = j;
        }
        return s.substr(0, pr[n - 1]);
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    Solution sol;
    if(sol.)

    return 0;
}