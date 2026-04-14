#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 2 == 1)
            cout << 0 << endl;
        else 
            cout << (n / 4) + 1 << endl;
    }

    return 0;
}