#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s = to_string(n);
        int d = s.size();
        int first = s[0] - '0';

        int ans = (d - 1) * 9 + first;
        int rep = 0;
        for(int i=0; i<d; i++) rep = rep * 10 + first;
        if(rep > n) ans--;
        cout << ans << endl;

    }

    return 0;
}