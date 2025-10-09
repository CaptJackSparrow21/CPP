#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int a,b,c;

    while(t--) {
        cin >> a >> b >> c;

        cout << (((a+b)==c) ? "+" : "-" ) << endl;
        // if((a+b) == c) {
        //     cout << "+\n";
        // }
        // else if ((a-b) == c) {
        //     cout << "-\n";
        // }
    }
    return 0;
}