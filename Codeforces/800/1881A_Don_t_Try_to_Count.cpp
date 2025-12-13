#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string curr = x;
        int ans = 0;
        bool flag = false;
        for(int i=0; i<10 && !flag; i++) {
            if(curr.find(s) != string::npos) {
                cout << ans << endl;
                flag = true;
            }

            curr += curr;
            ans++;
        }
        if(!flag) {
            if(curr.find(s) != string::npos) {
            cout << ans << endl;
             }
            else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}