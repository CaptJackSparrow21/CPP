#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t; cin >> t;
    // while(t--) {
    //     vector<int> s(4);
    //     for(int i=0; i<4; i++) {
    //         cin >> s[i];
    //     }
    //     int max1 = max(s[0], s[1]);
    //     int max2 = max(s[2], s[3]);

    //     sort(s.begin(), s.end());
    //     int m1 = s[3], m2 = s[2];

    //     if((max1 == m1 && max2 == m2) ||(max1 == m2 && max2 == m1)){
    //         cout << "YES\n";
    //     }
    //     else {
    //         cout << "NO\n";
    //     }
    // }

    int t; cin >> t;
    while(t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        if((min(s1, s2) > max(s3, s4)) || (max(s1, s2) < min(s3, s4))) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}