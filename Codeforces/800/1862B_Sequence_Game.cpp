#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> b(n);
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        
        vector<int> a;
        a.reserve(2 * n);
        a.push_back(b[0]);
        for(int i=1; i<n; i++) {
            if(b[i-1] <= b[i]) {
                a.push_back(b[i]);
            }
            else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for(int i=0; i<a.size(); i++) {
            cout << a[i] << ((i == a.size() - 1) ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}