#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;
    string n;
    cin >> k >> n;

    int cnt[10] = {}, sum = 0, ans = 0;

    for(char c : n) {
        cnt[c - '0']++;
        sum += c - '0';
    }

    for(int d=0; d<9 && sum < k; d++) {
        while(cnt[d] > 0 && sum < k) {
            sum += 9 - d;
            cnt[d]--;
            ans++;
        }
    }

    cout << ans;

    return 0;
}