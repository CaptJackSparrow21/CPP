#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    while(n--) {
        char c; ll d;
        cin >> c >> d;
        if(c == '+') {
            x += d;
        }
        else if(c == '-') {
            if(x >= d) x -= d;
            else cnt++;
        }
    }

    cout << x << " " << cnt << endl;

    return 0;
}