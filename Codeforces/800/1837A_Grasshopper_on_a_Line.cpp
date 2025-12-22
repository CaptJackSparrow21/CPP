#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int x, k;
        cin >> x >> k;
        if(x % k != 0) cout << "1\n" << x;
        else {
            cout << "2\n" << "1 " << x - 1; 
        }
        cout << endl;
    }

    return 0;
}