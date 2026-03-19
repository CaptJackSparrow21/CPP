#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(2*n);
        for(int i=0; i<2*n; i++) cin >> a[i];

        vector<bool> visited(n+1, false);

        for(int i=0; i<2*n; i++) {
            if(!visited[a[i]]) {
                cout << a[i] << " ";
                visited[a[i]] = true;
            }
        }
        cout << endl;
    }

    return 0;   
}