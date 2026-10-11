// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for(int &i : a) cin >> i;

//     vector<int> temp = a;
//     sort(temp.begin(), temp.end());
//     int i=1;
//     while(i < n) {
//         if(a[i-1] < a[i])
//             i++;
//     }

//     sort(a.begin() + i, a.begin() + i + k -1);
//     if(a == temp)
//         cout << "Yes";
//     else 
//         cout << "No";

//     return 0;
// }