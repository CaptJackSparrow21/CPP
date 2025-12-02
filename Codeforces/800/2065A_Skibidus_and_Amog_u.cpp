#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string w; cin >> w;
        string s1 = w.substr(0, w.size() - 2);
        string s2 = "i";

        cout << s1 + s2 << endl;
    }
    return 0;
}