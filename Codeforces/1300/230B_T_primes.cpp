#include<bits/stdc++.h>
using namespace std;
#define int long long

int divisor(int n) {
    int ans = 0;
    for(int i=1; i*i<=n; i++) {
        if(n % i == 0) {
            ans++;
            if(i != n/i)
                ans++;
        }
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const int max = 1e6;
    vector<bool> prime(max + 1, true);
    prime[0] = prime[1] = false;

    for(int i=2; i*i <= max; i++) {
        if(prime[i]) {
            for(int j=i*i; j<=max; j+=i)
                prime[j] = false;
        }
    }

    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        int r = sqrt(x);

        if(r * r == x && prime[r])
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}