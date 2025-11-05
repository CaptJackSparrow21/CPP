#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        //The largest possible GCD for any pair in 1 to n is always ⌊n / 2⌋ 
        //Why? Any number k from 1 to n, its largest pair is (k, 2k),
        //and the maximum is when 2k ≤ n. This happens for k = ⌊n/2⌋.

        cout << n/2 << endl;
    }
    return 0;
}