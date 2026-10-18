#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum % 2)
        cout << "NO";
    else {
        cout << "YES\n";
        int mid = sum / 2;
        vector<int> a, b;

        for(int i=n; i>0; i--) {
            if(i <= mid) {
                a.push_back(i);
                mid -= i;
            }
            else 
                b.push_back(i);
        }

        cout << a.size() << '\n';
        for(int i : a)
            cout << i << ' ';
        
        cout << '\n';

        cout << b.size() << '\n';
        for(int i : b)
            cout << i << ' ';
    }

    return 0;
}