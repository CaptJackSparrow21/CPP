#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(n <= 1) {
            cout << "1\n";
        }
        else {
            int rem = n - 2;
            int extrafloors = (rem + x - 1) / x;
            cout << 1 + extrafloors << endl;
        }
    }
    return 0;
}