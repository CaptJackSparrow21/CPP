#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if(!(cin >> n)) return 0;
    vector<int> h(n), a(n);
    for(int i=0; i<n; i++) {
        cin >> h[i] >> a[i];
    }

    unordered_map<int, int> freq;
    for(int x : a) {
        freq[x]++;
    }

    long long ans = 0;
    for(int i=0; i<n; i++) {
        ans += freq[h[i]];
    }

    cout << ans << endl;
    return 0;
}