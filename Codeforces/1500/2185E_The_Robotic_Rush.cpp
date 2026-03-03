//https://www.youtube.com/live/TMvUCkFASa4?si=w-YqW7qFO7OynKJ9&t=2433

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        set<int> b;
        for(int i=0; i<m; i++) {
            int x; cin >> x; b.insert(x);
        }

        string s; cin >> s;

        vector<pair<int, int>> bef_aft;
        set<pair<int, int>> before, after;
        for(int i=0; i<n; i++) {
            auto it = b.upper_bound(a[i]);
            int bef = INT_MAX, aft = INT_MAX;

            if(it != b.end()) aft = (*it) - a[i];
            if(it != b.begin()) {
                it--;
                bef = a[i] - (*it);
            }

            before.insert({bef, i});
            after.insert({aft, i});
            bef_aft.push_back({bef, aft});
        }

        int val = 0, ans = n;
        for(int i=0; i<k; i++) {
            if(s[i] == 'R') val++;
            else val--;

            if(val > 0) {
                while(!after.empty() && abs(val) >= (*after.begin()).first) {
                    auto i = (*after.begin()).second;
                    after.erase(after.begin());
                    before.erase(before.find({bef_aft[i].first, i}));
                    ans--;
                }
            }
            else {
                while(!before.empty() && abs(val) >= (*before.begin()).first) {
                    auto i = (*before.begin()).second;
                    before.erase(before.begin());
                    after.erase(after.find({bef_aft[i].second, i}));
                    ans--;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}