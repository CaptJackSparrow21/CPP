#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    char first = 'A'+ n - 1;
    for(int i=1; i<=n; i++) {
        for(char c=first; c>=first-(i-1); c-- ) {
            cout << c << " ";
        }
        cout << endl;
    }
}