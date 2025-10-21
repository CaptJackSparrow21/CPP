#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int ans = 0, curr = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x==0) curr++;
            else curr = 0;
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     vector<int> a(n);

    //     for(int i=0; i<n; i++) {
    //         cin >> a[i];
    //     }

    //     int count = 0, maxCount = 0;
    //     for(int i=0; i<n; i++) {
    //         if(a[i] == 0) {
    //             count++;
    //         }
    //         else{
    //             maxCount = max(count, maxCount);
    //             count = 0;
    //         }
    //     }

    //     cout << max(count, maxCount) << endl;
    // }

    return 0;
}