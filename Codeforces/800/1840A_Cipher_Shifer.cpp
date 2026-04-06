#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int i = 0;
        while(i < n) {
            int j = i;
            cout << s[i++];
            while(s[i++] != s[j]);
        }
        cout << endl;
    }

    return 0;
}