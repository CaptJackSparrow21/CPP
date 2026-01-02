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
        vector<int> res(n);
        int left = 0, right = n-1;
        for(int i=0; i<n; i++) {
            if(i % 2 == 0) res[i] = a[left++];
            else res[i] = a[right--];
        }

        for(int i=0; i<n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}