#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> a = {x, y, z};
        sort(a.begin(), a.end());
        if(a[1] != a[2]) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << a[0] << " " << a[0] << " " << a[2] << endl;
        }
    }

    return 0;
}