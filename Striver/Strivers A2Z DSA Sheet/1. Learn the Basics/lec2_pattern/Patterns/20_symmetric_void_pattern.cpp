#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    //1st half
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) { // left stars
            cout << "*";
        }

        for(int j=0; j<2*i; j++) {  // spaces
            cout << " ";
        }

        for(int j=0; j<n-i; j++) {  //roght stars
            cout << "*";
        }
        cout << endl;
    }

    // 2nd half
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {    // left stars
            cout << "*";
        }

        for(int j=0; j<2*(n-i-1); j++) {    //spaces
            cout << " ";
        }

        for(int j=0; j<=i; j++) {    //right stars
            cout << "*";
        }
        cout << endl;
    }
}