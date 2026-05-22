#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int mn = INT_MAX;
    int x = 0, y = 0;
    for(int i=0; i<n; i++) {
        int diff = abs(a[i] - a[(i+1) % n]);
        if(diff < mn) {
            mn = diff;
            x = i;
            y = (i + 1) % n;
        }
    }
    cout << x + 1 << " " << y + 1 << endl; 

    return 0;
}