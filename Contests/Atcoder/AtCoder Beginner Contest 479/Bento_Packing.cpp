// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, w;
//     cin >> n >> w;

//     vector<pair<int, int>> a(n);
//     for(auto &[x, y] : a) cin >> x >> y;

//     sort(a.rbegin(), a.rend());

//     int dish = 0, volume = 0;

//     for(auto [x, y] : a) {
//         if(volume < w && y < w) {
//             dish += x;
//             volume += y;
//         }
//     }

//     cout << dish;

//     return 0;
// }