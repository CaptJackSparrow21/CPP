#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        bool full = false;
        for(int i=0; i<n; i++) {
            string w;
            cin >> w;

            if(!full && (int)w.size() <= m) {
                m -= w.size();
                ans++;
            }
            else 
                full = true;
        }
        cout << ans << endl;
    }

    return 0;
}