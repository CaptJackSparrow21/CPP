#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int >a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int max = a[n-1];

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += max - a[i];
    }

    cout << sum << endl;
    return 0;
}