#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s, word;
        cin >> s >> word;

        vector<int> pos(26);

        for(int i=0; i<26; i++) 
            pos[s[i] - 'a'] = i;

        int ans = 0;
        
        for(int i=1; i<word.size(); i++) 
            ans += abs(pos[word[i] - 'a'] - pos[word[i-1] - 'a']);

        cout << ans << endl;

    }

    return 0;
}