#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++) {
            int k; cin >> k;
            string s ; cin >> s;

            for(int j=0; j<k; j++) {
                if(s[j] == 'D') {
                    a[i] = (a[i] + 1) % 10;
                }
                else if(s[j] == 'U'){
                    a[i] = (a[i] + 9) % 10;
                }
            }
        }

        for(int x : a)
            cout << x << ' ';

        cout << endl;
    }

    return 0;
}