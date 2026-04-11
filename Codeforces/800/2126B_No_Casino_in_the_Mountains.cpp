#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int a[n + 1];
        for(int i=1; i<=n; i++) cin >> a[i];
        int ans = 0, cnt = 0;
        for(int i=1; i<=n; i++) {
            if(a[i] == 1) {
                ans += (cnt + 1) / (k + 1);
                cnt = 0;
                continue;
            }
            else 
                cnt++;
        }
        ans += (cnt + 1) / (k + 1);
        cout << ans << endl;
    }


    // int t; cin >> t;
    // while(t--) {
    //     ll n, k;
    //     cin >> n >> k;
    //     vector<int> a(n);
    //     for(int i=0; i<n; i++) cin >> a[i];

    //     vector<int> pre(n, 0);
    //     pre[0] = (a[0] == 0) ? 1 : 0;

    //     for(int i=1; i<n; i++)
    //         pre[i] = (a[i] == 0) ? pre[i-1] + 1 : 0;

    //     int ans = 0;
    //     int i = k - 1;
    //     while(i < n) {
    //         if(pre[i] >= k) {
    //             ans++;
    //             i += k + 1;
    //         }
    //         else 
    //             i++;
    //     }
    //     cout << ans << endl;
    // }

    return 0;
}