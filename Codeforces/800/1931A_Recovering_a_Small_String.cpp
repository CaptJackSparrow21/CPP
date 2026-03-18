#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        string s = "aaa";
        int rem = n - 3;

        for(int i=2; i>=0; i--) {
            int add = min(25, rem);
            s[i] += add;
            rem -= add;
        }

        cout << s << endl;
    }

    return 0;
}