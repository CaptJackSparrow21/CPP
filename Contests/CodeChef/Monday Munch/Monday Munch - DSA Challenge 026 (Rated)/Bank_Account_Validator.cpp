#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int sum = 0;

        for(char c : s)
            sum += c - '0';

        if(sum % 10 == 0)
            cout << "Valid\n";
        else 
            cout << "Invalid\n";
    }

    return 0;
}