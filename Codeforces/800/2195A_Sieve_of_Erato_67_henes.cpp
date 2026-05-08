#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool flag = false;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        for(int i=0; i<n; i++) {
            if(a[i] == 67) {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");

        // int n; cin >> n;
        // ll mul = 1;
        // for(int i=0; i<n; i++) {
        //     int x;
        //     cin >> x;

        //     mul *= x;
        // }

        // if(mul % 67 == 0)
        //     cout << "YES\n";
        // else 
        //     cout << "NO\n";
    }

    return 0;
}