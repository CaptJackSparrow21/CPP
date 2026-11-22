#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 40000;
const int mod = 1e9 + 7;

bool isPalindrome(int n) {
    string s = to_string(n);
    string temp = s;
    reverse(temp.begin(), temp.end());
    return temp == s;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> pal;

    for(int i=1; i<=N; i++) {
        if(isPalindrome(i))
            pal.push_back(i);
    }

    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for(int coin : pal) {
        for(int i=coin; i<=N; i++)
            dp[i] = (dp[i] + dp[i - coin]) % mod;
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}