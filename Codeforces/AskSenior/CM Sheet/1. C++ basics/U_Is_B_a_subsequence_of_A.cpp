#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    bool ok = false;
    int i=0, j=0;
    while(i < n && j < m) {
        if(j == m-1) {
            ok = true;
            break;
        }
        else if(b[j] == a[i]) {
            j++;
            i++;
        } 
        else if(b[j] != a[i])
            i++;
    }

    cout << (ok ? "YES" : "NO");

    return 0;
}