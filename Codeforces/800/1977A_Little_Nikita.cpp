#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n < m) cout << "No\n";
        else if(m == n) cout << "Yes\n";
        else {
            if((n - m) % 2 == 0) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}