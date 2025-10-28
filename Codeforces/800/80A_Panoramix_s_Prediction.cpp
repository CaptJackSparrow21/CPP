#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if(x < 2) return false;
    for(int i=2; i*i <= x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while(!isPrime(next)) next++;

    cout << (m == next ? "YES" : "NO");

    return 0;
}