#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int k ; cin >> k;

        int num = 0, count = 0;

        while(count < k) {
            num++;
            if(num % 3 != 0 && num % 10 != 3) {
                count++;
            }
        }
        cout << num << endl;
    }
}

// class Solution {
//     public :
//         vector<int> threes(){
//             vector<int> a;
//             for(int i=1; a.size()<2000; i++) {
//                 if(i%3 != 0 && i%10 != 3) {
//                 a.push_back(i);
//             }
//         }
//         return a;
//     }
// };

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     Solution s;
//     vector<int> ans = s.threes();
//     int t; cin >> t;
//     while(t--) {
//         int k ; cin >> k;
//         cout << ans[k-1] << endl;
//     }

//     return 0;
// }