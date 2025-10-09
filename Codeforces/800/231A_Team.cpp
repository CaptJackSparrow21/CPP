#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    int count = 0;

    while (n--> 0 ) {
        int v; cin >> v;
        int p; cin >> p;
        int t; cin >> t;
        int result = v + p + t ;
        if (result >= 2) count++;
    }
    cout << count;
    return 0;
}