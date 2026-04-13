#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());

        if(a[n-1] <= d)
            cout << "YES\n";
        else if(a[0] > d)
            cout << "NO\n";
        else { 
            if(a[0] + a[1] <= d)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}