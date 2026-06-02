#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> nums(n);
    for(int &i : nums) cin >> i;

    bool ok = true;
    for(int i=0; i<n; i++) {
        if(nums[i] != nums[--n]) {
            ok = false;
        }
    }
    cout << (ok ? "YES" : "NO");

    return 0;
}