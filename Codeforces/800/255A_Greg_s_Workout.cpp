#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int chest = 0, biceps = 0, back = 0;

    for(int i=0; i<n; i++) {
        if(i % 3 == 0)
            chest += a[i];
        else if(i % 3 == 1)
            biceps += a[i];
        else 
            back += a[i];
    }

    int mx = max({chest, biceps, back});

    if(mx == chest)
        cout << "chest";
    else if(mx == back)
        cout << "back";
    else 
        cout << "biceps";

    return 0;
}