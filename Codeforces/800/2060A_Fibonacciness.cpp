#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<int> a = {a1 + a2, a4 - a2, a5 - a4};
        int res = 0;

        for(int i=0; i<3; i++) {
            int cnt = 0;
            int a3 = a[i];

            if(a3 == a1 + a2) cnt++;
            if(a3 == a4 - a2) cnt++;
            if(a3 == a5 - a4) cnt++;

            res = max(res, cnt);
        }

        cout << res << endl;

    }

    return 0;
}