#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r, c;
    cin >> r >> c;

    vector<bool> badRow(r, false);
    vector<bool> badCol(c, false);

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            char c; cin >> c;

            if(c == 'S') {
                badRow[i] = true;
                badCol[j] = true;
            }
        }
    }

    int badRows = 0, badCols = 0;
    for(bool x : badRow)
        if(x)
            badRows++;

    for(bool x : badCol)
        if(x)
            badCols++;

    cout << (r * c) - (badRows * badCols);

    return 0;
}