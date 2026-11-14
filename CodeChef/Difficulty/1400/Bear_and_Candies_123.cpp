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
        int limak = 0, bob = 0;
        bool li = true, bo = true;
        for(int i=1; i<=INT_MAX; i++) {
            if(i % 2) {
                limak += i;

                if(limak > a) {
                    li = false;
                    break;
                }
            }
            else {
                bob += i;

                if(bob > b) {
                    bo = false;
                    break;
                }
            }
        }

        if(li)
            cout << "Limak\n";
        else
            cout << "Bob\n";
    }

    return 0;
}