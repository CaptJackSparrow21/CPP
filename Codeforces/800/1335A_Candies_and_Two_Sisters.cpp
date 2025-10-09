#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t)) return 0;

    while(t--) {
        long long n;
        cin >> n;

        cout << max(0LL, (n-1) / 2) << endl;
    }
    return 0;
}
