#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;
        cout << b[0]<<a[1]<<a[2] << " " << a[0]<<b[1]<<b[2] << endl;
    }

    // while(t--) {
    //     string a,b;
    //     cin >> a >> b;

    //     char c = b[0];
    //     b[0] = a[0];
    //     a[0] = c;

    //     cout << a << " "<< b << endl;
    // }
    return 0;
}

