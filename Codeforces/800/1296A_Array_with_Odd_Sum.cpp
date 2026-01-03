#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sum = 0, even = 0, odd = 0;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] % 2) odd++;
            else even++;
        }
        if(sum % 2 == 1) cout << "YES\n";
        else if(odd > 0 && even > 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}