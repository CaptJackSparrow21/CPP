#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        if((n/2) % 2 != 0) { // For n/2 odd: sum of evens and odds cannot be equal, 
            cout << "NO\n";  // try manually for n=2, 6
            continue;
        }
        cout << "YES\n";
        for(int i=2; i<=n; i+=2) {
            cout << i << " " ;
        }
        for(int i=1; i<n-1; i+=2) {
            cout << i << " ";
        }
        cout << n + (n/2) - 1 << endl;
    }
    return 0;
}