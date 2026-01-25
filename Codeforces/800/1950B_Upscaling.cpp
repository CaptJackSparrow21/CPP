#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0; i<2*n; i++) {
            for(int j=0; j<2*n; j++) {
                cout << (((i/2) + (j/2)) % 2 == 0 ? '#' : '.');
                //cout << (((i/2) + (j/2)) & 1 ? '.' : '#');
            }
            cout << endl;
        }
    }

    return 0;
}