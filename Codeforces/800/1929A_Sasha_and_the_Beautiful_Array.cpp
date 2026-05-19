#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        int sum = 0;
        for(int i=1; i<n; i++) 
            sum += a[i] - a[i-1];

        cout << sum << endl;
    }

    return 0;
}