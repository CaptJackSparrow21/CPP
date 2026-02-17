#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sq = ceil(sqrt(n));
        if(sq * sq == n) {
            cout << "0 " << sq << endl; 
        }
        else {
            cout << "-1" << endl;
        }
    }

    return 0;
}