#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int result = 0;
    
        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            result += x;
        }

        if(result == n) cout << "0\n";
        else if(result > n) {
            cout << result - n << endl;
        }
        else if(result < n) {
            cout << "1\n";
        }
    }

    return 0;
}