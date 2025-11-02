#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        int wrong_even = 0, wrong_odd = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(i % 2 != a[i] % 2) {
                if(i % 2 == 0) 
                    wrong_even++;
                else
                    wrong_odd++; 
            }
        }
        cout << (wrong_even == wrong_odd ? wrong_even : -1) << endl;
    }
    return 0;
}