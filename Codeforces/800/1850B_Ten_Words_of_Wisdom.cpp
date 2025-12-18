#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int response = INT_MIN, quality = INT_MIN;
        for(int i=1; i<=n; i++) {
            int a, b;
            cin >> a >> b;
            if(b > quality && a < 11) {
                response = i;
                quality = b;
            }
        }
        cout << response << endl;
    }

    return 0;
}