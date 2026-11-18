#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int one = 0, zero = 0;
        for(char c : s) {
            if(c == '0') zero++;
            else one++;
        }

        cout << min(one, zero + 1) << '\n';
    }

    return 0;
}

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
//         string s; cin >> s;
//         int one = 0, zero = 0;
//         for(char c : s) {
//             if(c == '0') zero++;
//             else one++;
//         }

//         if(one == 0)
//             cout << 0 << '\n';
//         else if(zero == 0)
//             cout << 1 << '\n';
//         else 
//             cout << min(one, zero + 1) << '\n';
//     }

//     return 0;
// }