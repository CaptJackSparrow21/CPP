#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int k, x;
        cin >> k >> x;

        while(k > 0) {
            x = x * 2;
            k--;
        }
        cout << x << endl;
    }

    return 0;
}