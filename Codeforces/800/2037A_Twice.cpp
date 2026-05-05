#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;

            freq[x]++;
        }

        int ans = 0;
        for(auto &it : freq)
            ans += it.second / 2;

        cout << ans << endl;
    }

    return 0;
}