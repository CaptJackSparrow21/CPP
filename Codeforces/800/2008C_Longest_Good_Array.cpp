#include<bits/stdc++.h>
using namespace std;
#define ll long long

//ak = l+(1+2+3+⋯+(k−1))
//l + (k−1)k / 2 ​≤ r
//k(k−1) ≤ 2(r−l)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;

        ll diff = r - l;
        ll k = 1;

        while((k * (k-1)) / 2 <= diff)
            k++;

        cout << k - 1 << endl;

    }

    return 0;
}