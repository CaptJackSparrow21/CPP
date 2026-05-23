#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cost(string &a, string &b) {
    int val = 0;
    for(int i=0; i<a.size(); i++) 
        val += abs(a[i] - b[i]);
    
    return val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        for(string &i : a) cin >> i;

        int ans = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                ans = min(ans, cost(a[i], a[j]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}