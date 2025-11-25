#include<bits/stdc++.h>
using namespace std;

/* The largest number of primes uses as many 2s as possible.
    If n is even: Use all 2 (since 2 is the smallest prime).
    If n is odd: Use n−3 as many 2s, and finish with one 3 
    (since 3 is also prime, and makes sum odd). */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << n / 2 << endl;
    
    if(n % 2 == 0) {
        for(int i=0; i<n/2; i++) {
            cout << "2 ";
            }
        }
        else {
            for(int i=1; i<n/2; i++) {
                cout << "2 ";
            }
            cout << "3";
        }

    return 0;
}