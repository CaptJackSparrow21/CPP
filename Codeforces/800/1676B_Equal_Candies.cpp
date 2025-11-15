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

        int min = *min_element(a.begin(), a.end());
        // int min = a[0];
        // for(int i=0; i<n; i++) {
        //     if(a[i] < min) {
        //         min = a[i];
        //     }
        // }

        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += a[i] - min;
        }

        cout << sum << endl;
    }

    return 0;
}