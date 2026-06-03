#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        
        char ca = a.back();
        char cb = b.back();

        if(ca == cb) {
            if(a.size() == b.size())
                cout << "=\n";
            else if(ca == 'S')
                cout << (a.size() > b.size() ? "<\n" : ">\n");
            else 
                cout << (a.size() > b.size() ? ">\n" : "<\n");
        }
        else {
            if(ca == 'S') 
                cout << "<\n";
            else if(cb == 'S')
                cout << ">\n";
            else if(ca == 'M')
                cout << "<\n";
            else 
                cout << ">\n";
        }
    }

    return 0;
}