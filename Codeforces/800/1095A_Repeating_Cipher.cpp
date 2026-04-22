#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;

    int i = 0;
    int x = 1;

    while(i < n) {
        cout << s[i];
        i += x;
        x++;
    }

    return 0;
}