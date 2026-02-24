#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int,int>> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }

        bool flag = false;

        if(arr[0].first - 0 >= s) {
            flag = true;
        }

        for(int i=0; i<n-1; i++) {
            if(arr[i+1].first - arr[i].second >= s) {
                flag = true;
                break;
            }
        }

        if(!flag && m - arr[n-1].second >= s) {
            flag = true;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}