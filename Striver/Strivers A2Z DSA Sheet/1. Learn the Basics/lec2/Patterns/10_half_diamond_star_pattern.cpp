#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    //1st half
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //2nd half
    for(int i=1; i<n; i++) {
       for(int j=1; j<=n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}