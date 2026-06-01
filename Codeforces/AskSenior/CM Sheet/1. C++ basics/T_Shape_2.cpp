#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int spaces = n - 1;
    for(int i=0; i<n; i++) {
        for(int k=0; k<spaces; k++)
            cout << " ";

        for(int j=0; j<2*i+1; j++)
            cout << "*";

        cout << "\n";
        spaces--;
    }

    return 0;
}