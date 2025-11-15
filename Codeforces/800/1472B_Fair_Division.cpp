#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt1 = 0, cnt2 = 0;
        int sum = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            sum += x;
            if(x == 1) cnt1++;
            else cnt2++;
        }
        if(sum % 2) cout << "NO\n";
        else if(cnt1 == 0 && (cnt2 % 2)) cout << "NO\n";
        else cout << "YES\n";
     }
    return 0;
}