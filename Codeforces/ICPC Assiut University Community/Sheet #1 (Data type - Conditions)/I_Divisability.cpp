#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, x;
    cin >> a >> b >> x;

    if(a > b)
        swap(a, b);

    int first = ((a + x - 1) / x) * x;
    int last = (b / x) * x;

    if(first > last) {
        cout << 0;
        return 0;
    }

    int n = ((last - first) / x) + 1;
    cout << n * (last + first) / 2; 

    return 0;
}