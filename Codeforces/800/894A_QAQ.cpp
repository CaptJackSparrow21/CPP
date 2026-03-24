#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();

    int totalQ = 0;

    for(char c : s) 
        if(c == 'Q') totalQ++;

    int leftQ = 0;
    int rightQ = totalQ;
    int ans = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == 'Q') {
            leftQ++;
            rightQ--;
        }
        else if(s[i] == 'A') {
            ans += leftQ * rightQ;
        }
    }

    //brute force 
    // int ans = 0;
    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         for(int k=j+1; k<n; k++) {
    //             if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
    //                 ans++;
    //         }
    //     }
    // }

    cout << ans;

    return 0;
}