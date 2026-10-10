#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        char a[3][3];
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                cin >> a[i][j];

        bool found = false;

        for(int i=0; i<3; i++) {
            if(a[i][0] != '.' && a[i][0] == a[i][1] && a[i][1] == a[i][2]) {
                cout << a[i][0] << '\n';
                found = true;
                break;
            }
        }

        if(found)
            continue;

        for(int j=0; j<3; j++) {
            if(a[0][j] != '.' && a[0][j] == a[1][j] && a[1][j] == a[2][j]) {
                cout << a[0][j] << '\n';
                found = true;
                break;
            }
        }

        if(found)   
            continue;

        if(a[0][0] != '.' && a[0][0] == a[1][1] && a[1][1] == a[2][2])
            cout << a[0][0] << '\n';
        else if(a[0][2] != '.' && a[0][2] == a[1][1] && a[1][1] == a[2][0])
            cout << a[0][2] << '\n';
        else 
            cout << "DRAW" << '\n';
    }

    return 0;
}