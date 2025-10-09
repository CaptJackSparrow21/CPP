#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x[4];
    for(int i=0; i<4; i++) {
        cin >> x[i];
    }
    sort(x, x+4);
    long long s = x[3];

    long long a = s - x[0];
    long long b = s - x[1];
    long long c = s - x[2];

    cout << a << " " << b << " " << c << endl;
    return 0;
}