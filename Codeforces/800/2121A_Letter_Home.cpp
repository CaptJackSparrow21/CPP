#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int left = abs(s - a[0]);
        int right = abs(s - a[n-1]);

        int dist = min(left, right) + (a[n-1] - a[0]);
        
        cout << dist << endl;
    }

    return 0;
}