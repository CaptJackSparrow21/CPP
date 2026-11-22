#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int third = max({a, b, c});
    int first = min({a, b, c});
    int second = sum - first - third;
    
    cout << first << '\n';
    cout << second << '\n';
    cout << third << '\n';
    cout << '\n';
    cout << a << '\n';
    cout << b << '\n';
    cout << c;

    return 0;
}