#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s; cin >> s;
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    if(s >= 1)
        dp[1] = 1;

    for(int i=2; i<=s; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << dp[s] << '\n';

    return 0;
}