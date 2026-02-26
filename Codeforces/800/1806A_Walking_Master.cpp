//https://www.youtube.com/watch?v=HnvtpvvZqjc
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(d < b) cout << "-1\n";
        else {
            if((a + d - b) < c) cout << "-1\n";
            else {
                cout << 2 * (d-b) + a - c << endl;
            }
        }
    }

    return 0;
}