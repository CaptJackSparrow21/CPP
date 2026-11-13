#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ra, ca;
    cin >> ra >> ca;

    vector<vector<int>> a(ra, vector<int> (ca));

    for(int i=0; i<ra; i++)
        for(int j=0; j<ca; j++)
            cin >> a[i][j];

    int rb, cb;
    cin >> rb >> cb;

    vector<vector<int>> b(rb, vector<int> (cb));

    for(int i=0; i<rb; i++)
        for(int j=0; j<cb; j++)
            cin >> b[i][j];

    vector<vector<int>> c(ra, vector<int> (cb, 0));

    for(int i=0; i<ra; i++) {
        for(int j=0; j<cb; j++) {
            for(int k=0; k<ca; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0; i<ra; i++) {
        for(int j=0; j<cb; j++)
            cout << c[i][j] << " ";
        cout << '\n';
    }

    return 0;
}