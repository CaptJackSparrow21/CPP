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
        set<int> b;
        for(int i=0; i<n; i++)  {
            cin >> a[i];
            b.insert(a[i]);
        }
        
        cout << b.size() << endl;
    }

    return 0;
}