#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n - 1);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int num = 1;
    for(int i=0; i<n-1; i++) {
        if(a[i] == num)
            num++;
        else 
            break;
    }
    cout << num;

    return 0;
}