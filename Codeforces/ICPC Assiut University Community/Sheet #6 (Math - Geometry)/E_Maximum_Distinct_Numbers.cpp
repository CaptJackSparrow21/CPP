#include<bits/stdc++.h>
using namespace std;
#define int long long

int getsum(int n) {
    return n * (n+1) / 2;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int ans = 0, cnt = 0;
    int x = sqrt(n);
    while(x <= n) {
        int a = getsum(x);
        if(a < getsum(x))
            x++;
    }

    cout << x;

    return 0;
}