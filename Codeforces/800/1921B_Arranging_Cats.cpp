#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s, f;
        cin >> s >> f;

        int add = 0, remove = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '0' && f[i] == '1') add++;
            if(s[i] == '1' && f[i] == '0') remove++;
        }
        cout << max(add, remove) << endl;
    }

    return 0;
}