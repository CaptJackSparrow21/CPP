#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int side = (min(max(2*a, b), max(a, 2*b)));
        cout << side * side << endl;
    }

    return 0;
}