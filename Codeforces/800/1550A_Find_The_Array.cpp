#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int s; cin >> s;
        int x = 1, sum = 0, c = 0;
        while(sum < s) {
            sum += x;
            x += 2;
            c++;
        } 
        cout << c << '\n';
    }

    return 0;
}