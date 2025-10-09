#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s = "";

    for(int i=0; i<n; i++) {
        cin >> s;

        for(char &c : s) {
        c = tolower(c) ;
        }

        if( s == "yes") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}