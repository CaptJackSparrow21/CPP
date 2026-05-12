#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
        string x, y;
        cin >> x >> y;

    int total = 0;
    for(int i=0; i<n; i++) {
        int diff = abs(x[i] - y[i]);
        int rnd = 10 - diff;
            
        total += min(diff, rnd);
    }
    cout << total << endl;
    
    return 0;
}