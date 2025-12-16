#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int even_cnt = 0;
        int odd_cnt = 0;
        vector<int> a(2*n);
        for(int i=0; i<2*n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) even_cnt++;
            else odd_cnt++;
        }

        if(even_cnt == n) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}