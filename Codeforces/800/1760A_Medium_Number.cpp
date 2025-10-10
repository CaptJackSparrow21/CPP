#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        cout << v[1] << endl;

        
        // if((a < b && b < c) || (c < b && b < a )) {
        //     cout << b << endl;
        // }
        // else if((a < c && c < b) || (b < c && c < a)) {
        //     cout << c << endl;
        // }
        // else if((b < a && a < c) || (c < a && a < b)) {
        //     cout << a << endl;
        // }
    }
    return 0;
}