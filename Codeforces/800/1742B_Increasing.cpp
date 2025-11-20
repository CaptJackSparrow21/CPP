#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        unordered_set<int> s;
        
        for(int i=0; i<n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     vector<int> a(n);
    //     for(int i=0; i<n; i++) {
    //         cin >> a[i];
    //     }
    //     sort(a.begin(), a.end());
    //     bool find = true;
    //     for(int i=1; i<n; i++) {
    //         if(a[i] == a[i-1]) {
    //             find = false;
    //             break;
    //         }
    //     }
    //     cout << (find ? "YES" : "NO") << endl;
    // }

    return 0;
}