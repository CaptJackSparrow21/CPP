#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<long long> horseshoes = {s1, s2, s3, s4};
    cout << 4 - horseshoes.size();
    return 0;
}