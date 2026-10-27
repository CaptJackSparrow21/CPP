#include<bits/stdc++.h>
using namespace std;
#define int long long

void hanoi(int n, int from, int aux, int to) {
    if(n == 0) return;

    hanoi(n - 1, from, to, aux);
    cout << from << ' ' << to << '\n';
    hanoi(n - 1, aux, from, to);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 2, 3);

    return 0;
}