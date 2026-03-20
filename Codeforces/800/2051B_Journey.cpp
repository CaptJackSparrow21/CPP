#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll sum = a + b + c;
        ll d = (n / sum) * 3;

        if(n % sum == 0)
            cout << d << endl;
        else if(n % sum <= a)
            cout << d + 1 << endl;
        else if(n % sum <= a+b)
            cout << d + 2 << endl;
        else 
            cout << d + 3 << endl;

    }

    return 0;
}