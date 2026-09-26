#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        set<int> sta, stb;
        for(int i : a)
            sta.insert(i);
        for(int i : b)
            stb.insert(i);

        if(sta.size() == 1 && stb.size() < 3)
            cout << "NO\n";
        else if(sta.size() < 3 && stb.size() == 1)
            cout << "NO\n";
        else 
            cout << "YES\n";

    }

    return 0;
}