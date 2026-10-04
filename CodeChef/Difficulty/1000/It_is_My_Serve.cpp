#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int serve = a + b + 1;

        if(serve % 4 == 0 || serve % 4 == 3)
            cout << "Bob\n";
        else if(serve % 4 == 1 || serve % 4 == 2)
            cout << "Alice\n";
    }

    return 0;
}