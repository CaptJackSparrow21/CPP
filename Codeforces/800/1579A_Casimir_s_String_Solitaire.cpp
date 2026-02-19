#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cntA = 0, cntB = 0, cntC = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'A') cntA++;
            else if(s[i] == 'B') cntB++;
            else cntC++;
        }

        if(s.size() % 2 == 1) cout << "NO\n";
        else if(cntB == (s.size()) / 2) cout << "YES\n";
        else cout << "NO\n";

        // string s; cin >> s;
        // int cntA = 0, cntB = 0, cntC = 0;
        // for(int i=0; i<s.size(); i++) {
        //     if(s[i] == 'A') cntA++;
        //     else if(s[i] == 'B') cntB++;
        //     else cntC++;
        // }

        // if(cntA == cntB && cntC == 0) cout << "YES\n";
        // else if(cntB == cntC && cntA == 0) cout << "YES\n";
        // else if(cntB == cntA + cntC) cout << "YES\n";
        // else cout << "NO\n";
    }

    return 0;
}