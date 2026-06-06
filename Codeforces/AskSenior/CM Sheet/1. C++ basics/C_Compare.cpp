#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x, y;
    cin >> x >> y;

    if(x.size() > y.size())
        cout << y;
    else if(x.size() < y.size())
        cout << x;
    else {
        for(int i=0; i<x.size(); i++) {
            if(x[i] == y[i])
                continue;
            else {
                if(x[i] > y[i])
                    cout << y;
                else 
                    cout << x;
            }
        }
    }

    return 0;
}