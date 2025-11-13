#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << a[n-1] - a[0] << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     vector<int> a(n);
    //     for(int i=0; i<n; i++) {
    //         cin >> a[i];
    //     }

    //     int max = *max_element(a.begin(), a.end());
    //     int min = *min_element(a.begin(), a.end());

    //     cout << max - min << endl;
    // }

    return 0;
}