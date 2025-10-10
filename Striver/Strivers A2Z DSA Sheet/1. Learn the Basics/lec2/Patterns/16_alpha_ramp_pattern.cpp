#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    char c = 'A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << c;
        }
        c += 1;
        cout << endl;
    }
}