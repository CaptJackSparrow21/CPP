#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt = 0;
        while(n > 0) {
            int a, b;
            cin >> a >> b;
            if(a > b)
                cnt++;
            n--;
        }
        cout << cnt << endl;
    }

    return 0;
}