#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int k = s.size();
        sort(s.begin(), s.end());
        char c = 'a';
        cout << s[k-1] - c + 1 << endl;
    }

    return 0;
}