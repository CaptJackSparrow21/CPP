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
        
        vector<int> freq(26, 0);

        for(char c : s)
            freq[c - 'A']++;

        int ans = 0;

        for(int i=0; i<26; i++) {
        if(freq[i] >= i+1)
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}