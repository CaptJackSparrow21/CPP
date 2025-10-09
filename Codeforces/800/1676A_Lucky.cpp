#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    while(n--) {
        cin >> s;
        int leftSum = (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        int rightSum = (s[3]-'0')+(s[4]-'0')+(s[5]-'0');

        cout << (leftSum == rightSum ? "YES\n" : "NO\n");
    }
    return 0;
}