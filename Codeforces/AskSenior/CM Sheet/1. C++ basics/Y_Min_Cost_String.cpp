#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int n = s.size();
    int cost[26];
    for(int i=0; i<26; i++)
        cin >> cost[i];

    vector<int> right_char(n, -1);
    int r = -1;
    for(int i=n-1; i>=0; i--) {
        if(s[i] != '?')
            r = i;
        right_char[i] = r;
    }

    for(int i=0; i<n; i++) {
        if(s[i] == '?') {
            int lc = (i > 0) ? cost[s[i-1] - 'a'] : -1;
            int ri = right_char[i];
            int rc = (ri != -1) ? cost[s[ri] - 'a'] : -1;

            char best = 0;
            int best_val = INT_MAX;

            for(char ch='a'; ch<='z'; ch++) {
                int c = cost[ch - 'a'];
                int contri = 0;
                if(lc != -1)
                    contri += abs(lc - c);
                if(rc != -1)
                    contri += abs(rc - c);
                if(contri < best_val) {
                    best_val = contri;
                    best = ch;
                }
            }
            s[i] = best;
        }
    }

    ll total_cost = 0;
    for(int i=0; i+1<n; i++)
        total_cost += abs(cost[s[i] - 'a'] - cost[s[i+1] - 'a']);

    cout << total_cost << '\n' << s << '\n';

    return 0;
}