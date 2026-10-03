// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, v;
//     cin >> n >> v;
//     vector<int> w(n+1, 0);
//     for(int i=1; i<=n; i++) {
//         int x; cin >> x;
//         w[i] = x;
//     }

//     int ans = 0;
//     int happy = 0;

//     int i = 0, j = 0, k = 0;
//     while(i <= n && j <= n && k <= n) {
//         j = i + 1, k = j + 1;
//         happy = i + j + k;
//         if(happy <= v) {
//             ans = max(ans , w[i] + w[j] + w[k]);
//         }
//     }

//     for(int i=1; i<=n; i++) {
//         for(int j=i+1; j<=n; j++) {
//             for(int k=j+1; k<=n; i++) {
//                 happy += i + j + k;
//                 if(happy <= v)
//                     ans = max(ans, w[i] + w[j] + w[k]);
//             }
//         }
//     }

//     cout << ans;

//     return 0;
// }