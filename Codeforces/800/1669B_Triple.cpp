#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n+1, 0);
        int ans = -1;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            a[x]++;
            if(a[x] == 3) 
                ans = x;
        }
        cout << ans << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     vector<int> a(n);
    //     for(int i=0; i<n; i++)  cin >> a[i];
    //     sort(a.begin(), a.end());
    //     int ans = -1;
    //     for(int i=0; i+2<n; i++) {
    //         if(a[i] == a[i+1] && a[i] == a[i+2]) {
    //             ans = a[i];
    //             break;
    //             }
    //         }
    //         cout << ans << endl;
    //     }

    return 0;
}