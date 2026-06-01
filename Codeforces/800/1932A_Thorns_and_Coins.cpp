#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans = 0;

        for(int i=0; i<n; i++) {
            if(i + 1 < n && s[i] == '*' && s[i+1] == '*')
                break;

            if(s[i] == '@')
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}