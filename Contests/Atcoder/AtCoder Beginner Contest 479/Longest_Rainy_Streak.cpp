// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n; cin >> n;
//     string s; cin >> s;

//     int ans = 0, mx = 0;
//     for(int i=0; i<n-1; i++) {
//         if(s[i] == 'R' && s[i] == s[i+1]) {
//             mx++;
//             ans = max(ans, mx);
//         }
//         else if(s[i] != 'R') {
//             mx = 0;
//         }
//     }

//     cout << ((mx == 0 ? 0 : ans+1));

//     return 0;
// }