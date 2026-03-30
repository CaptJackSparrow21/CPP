#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        //01.03.2025
        int arr[10] = {};
        int ans = 0;
        bool ok = false;

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            arr[x]++;
            if(arr[0] >= 3 && arr[1] >= 1 && arr[3] >= 1
                && arr[2] >= 2 && arr[5] >= 1 && !ok) {
                    ans = i + 1;
                    ok = true;
            }
        }
        if(ok) cout << ans << endl;
        else cout << 0 << endl;
    }

    return 0;
}