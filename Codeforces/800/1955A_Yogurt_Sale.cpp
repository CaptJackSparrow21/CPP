#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int total = n * a;
        if(b < 2 * a) {
            total = (n / 2) * b + (n % 2) * a;
        }
        cout << total << endl;
    }

    return 0;
}