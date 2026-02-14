#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int cnt = 0;
    
    for(char c : t) {
        if(c == s[cnt]) cnt++;
    }

    cout << cnt + 1 << endl;

    return 0;
}