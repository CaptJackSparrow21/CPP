#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> val(n), time(n, 0);
    int sum = 0;

    for(int i=0; i<n; i++) {
        cin >> val[i];
        sum += val[i];
    }

    int globalVal = 0, lastUpdate = 0;

    for(int t=1; t<=q; t++) {
        int type; cin >> type;

        if(type == 2) {
            int x; cin >> x;

            globalVal = x;
            lastUpdate = t;
            sum = n * x;
        }
        else {
            int i, x;
            cin >> i >> x;
            i--;

            int oldValue;

            if(time[i] < lastUpdate)
                oldValue = globalVal;
            else
                oldValue = val[i];
            
            sum = sum - oldValue + x;

            val[i] = x;
            time[i] = t;
        }
        cout << sum << '\n';
    }

    return 0;
}