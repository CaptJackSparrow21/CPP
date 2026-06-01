#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(int n) {
    int cnt = 0;
    for(int i=1; i<=n; i++) {
        if(n % i == 0)
            cnt++;
    }

    if(cnt == 2)
        return true;
    else 
        return false;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i=1; i<=n; i++) {
        if(is_prime(i))
            cout << i << " ";
    }

    return 0;
}