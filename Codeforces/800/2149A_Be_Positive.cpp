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
        int neg1 = 0, pos1 = 0, zero = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == -1) neg1++;
            else if(a[i] == 1) pos1++;
            else zero++;
        }

        if(neg1 % 2 == 0) {
            cout << zero << endl;
        }
        else {
            cout << zero + 2 << endl;
        }
    }

    return 0;
}