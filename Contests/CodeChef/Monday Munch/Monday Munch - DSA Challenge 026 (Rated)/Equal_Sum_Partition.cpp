// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t; cin >> t;
//     while(t--) {
//         int n; cin >> n;
//         vector<int> a(n);
//         for(int &i : a) cin >> i;
//         int ans = accumulate(a.begin(), a.end(), 0);
//         if(ans % 2)
//             cout << "NO\n";
//         else {
//             sort(a.begin(), a.end());
//             int mid = ans / 2;
//             bool ok = false;
//             int midSum = 0;
//             for(int i=0; i<n; i++) {
//                 midSum += a[i];
//                 if(midSum == mid) {
//                     ok = true;
//                     break;
//                 }
//             }

//             cout << (ok ? "YES\n" : "NO\n");
//         }
//     }

//     return 0;
// }