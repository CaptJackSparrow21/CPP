#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        vector<string> a(8);
        for(int i=0; i<8; i++) cin >> a[i];

        //think diagonally like
        //  # . #
        //  . # .
        //  # . #
        for(int i=1; i<7; i++) {
            for(int j=1; j<7; j++) {
                if(a[i-1][j-1] == '#' &&
                   a[i-1][j+1] == '#' &&
                   a[i+1][j-1] == '#' &&
                   a[i+1][j+1] == '#')
                    cout << i+1 << " " << j+1 << endl;
            }
        }
    }

    return 0;
}