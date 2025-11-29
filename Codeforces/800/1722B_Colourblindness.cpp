#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for(int i=0; i<n; i++) {
            if(s1[i] != s2[i]) {
                if(s1[i] == 'G')    s1[i] = 'B';
                if(s2[i] == 'G')    s2[i] = 'B';
            }
        }
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     string s1, s2; 
    //     cin >> s1 >> s2;
    //     bool flag = true; 
    //     for(int i=0; i<n; i++) {
    //         if(s1[i] != s2[i]) {
    //             if(!((s1[i] == 'G' && s2[i] == 'B') || s1[i] == 'B' && s2[i] == 'G')){
    //                 flag = false;
    //                 break;
    //             }
    //         }
    //     }
    //     cout << (flag ? "YES" : "NO") << endl;
    // }
    return 0;
}