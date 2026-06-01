#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(int n) {
    if(n < 2) return 1;
    return n * fact(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        cout << fact(n) << endl;
    }

    return 0;
}