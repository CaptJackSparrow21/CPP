// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t; cin >> t;
//     while(t--) {
//         int m, x, y;
//         cin >> m >> x >> y;
//         vector<int> a(m);
//         for(int &i : a) cin >> i;

//         int reach = x * y;
//         int ans = 0;
//         for(int i=0; i<m-1; i++) {
//             int left1 = a[i] - reach, left2 = a[i] - reach;
//             int right1 = a[i+1] + reach, right2 = a[i+1] + reach;
//             if(left1 > 0)
//                 ans += reach;
//             if(right1 < 101)
//                 ans += reach;
//             if(left2 < right1)
//                 ans -= 2;
//             if(left2 > 0)
//                 ans += reach;
//             if(right2 < 101)
//                 ans += reach;
//         }

//         cout << 98 - ans << '\n';


//     }

//     return 0;
// }