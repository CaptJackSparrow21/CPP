#include<bits/stdc++.h>
using namespace std;
#define int long long

int countMedian(vector<int> &a) {
    sort(a.begin(), a.end());
    int n = a.size();
    return a[n/2] - a[(n-1)/2] + 1;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> x(n), y(n);

        for(int i=0; i<n; i++)
            cin >> x[i] >> y[i];

        int cntX = countMedian(x);
        int cntY = countMedian(y);

        cout << cntX * cntY << '\n';
    }

    return 0;
}