#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int years = n / 365;
    int months = (n % 365) / 30;
    int days = (n % 365) % 30;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";

    return 0;
}