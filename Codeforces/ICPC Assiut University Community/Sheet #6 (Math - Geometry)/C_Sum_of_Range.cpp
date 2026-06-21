#include<bits/stdc++.h>
using namespace std;
#define int long long

int getsum(int x) {
    return x * (x + 1) / 2;
}

int oddsum(int x) {
    int cnt = (x+1) / 2;
    return cnt * cnt;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);

    int ans1 = getsum(b) - getsum(a-1);
    int ans2 = oddsum(b) - oddsum(a-1);
    int ans3 = ans1 - ans2;

    cout << ans1 << '\n' << ans3 << '\n' << ans2;

    return 0;
}