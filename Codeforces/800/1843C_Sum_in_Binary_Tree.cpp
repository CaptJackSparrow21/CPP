#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll sum = 0;
        if(n == 1) cout << 1 << endl;
        else {
            while(n != 1) {
                sum += n;
                n /= 2;
                
        }
            cout << sum + 1 << endl;
        }
    }

    return 0;
}