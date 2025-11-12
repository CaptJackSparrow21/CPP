#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int h, m;
        cin >> h >> m;

        cout << 1440 - (60 * h) - m << endl;

        // int rh = 23 - h;
        // int rm = 60 - m;

        // if(rh == 0) {
        //     cout << rm << endl;
        // }
        // else if(rh > 0) {
        //     cout << (rh * 60) + rm << endl;
        // }
    }
    return 0;
}