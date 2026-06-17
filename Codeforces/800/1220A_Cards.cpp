#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num; cin >> num;
    string s; cin >> s;
    int z = 0, e = 0, r = 0, o = 0, n = 0;

    for(char c : s) {
        if(c == 'z') z++;
        else if(c == 'e') e++;
        else if(c == 'r') r++;
        else if(c == 'o') o++;
        else if(c == 'n') n++;
    }

    while(n > 0) {
        cout << 1 << " ";
        n--;
    }
    while(z > 0) {
        cout << 0 << " ";
        z--;
    }

    return 0;
}