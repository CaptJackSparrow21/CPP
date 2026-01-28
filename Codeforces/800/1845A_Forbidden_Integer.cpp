#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if(x != 1) {
            cout << "YES\n";
            cout << n << endl;
            for(int i=1; i<=n; i++) cout << "1 ";
            cout << endl;
        }
        else {
            if(k == 1) {
                cout << "NO\n";
            }
            else if(n % 2 == 0) {
                cout << "YES\n";
                cout << n / 2 << endl;
                for(int i=1; i<=(n/2); i++) cout << "2 ";
                cout << endl;
            }
            else {
                if(k == 2) {
                    cout << "NO\n";
                }
                else {
                    cout << "YES\n";
                    cout << 1 + (n-3) / 2 << endl;
                    cout << "3 ";
                    for(int i=1; i<=(n-3)/2; i++) cout << "2 ";
                    cout << endl;
                }
            }
        }
    }

    return 0;
}