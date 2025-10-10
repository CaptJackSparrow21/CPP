#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    char c = 'A';

    for(int i=0; i<n; i++) {
        for(char c='A'; c<='A'+i; c++) {   
            cout << c;
        }
        cout << endl;
    }
}