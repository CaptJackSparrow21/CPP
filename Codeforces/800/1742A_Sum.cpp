#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n)) return 0;

    int a, b, c;
    for(int i=0; i<n; i++) {
    cin >> a >> b >> c;

    if(a == b+c || b == a+c || c == a+b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
        }
    }
    return 0;
}