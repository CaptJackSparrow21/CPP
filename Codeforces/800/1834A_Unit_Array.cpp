#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt_pos = 0, cnt_neg = 0;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            if(x == 1) cnt_pos++;
            else cnt_neg++;
        }

        int ops = 0;
        int sum = cnt_pos - cnt_neg;

        if(sum < 0) {
            int need = (-sum + 1 )/ 2;
            ops += need;
            cnt_neg -= need;
            cnt_pos += need;
        }

        if(cnt_neg % 2 == 1) ops++;

        cout << ops << endl;
    }

    return 0;
}