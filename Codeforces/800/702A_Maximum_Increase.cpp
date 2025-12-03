#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int cnt = 1, ans = 1;
    for(int i=1; i<n; i++) {
        if(a[i] > a[i-1]) {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 1;
    }

    cout << ans << endl;
    return 0;
}