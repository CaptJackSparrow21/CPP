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

        set<char> st;

        for(int i=0; i<n; i++) 
            st.insert(s[i]);

        string r = "";

        for(char c : st)
            r += c;
        
        map<char, char> mp; 
        int m = r.size();

        for(int i=0; i<m; i++) {
            mp[r[i]] = r[m-1-i];
        }

        for(char c : s)
            cout << mp[c];

        cout << endl;

    }

    return 0;
}