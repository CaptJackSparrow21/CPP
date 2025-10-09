#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n % 2 == 0) return 0;

    for(int i=1; i<=n; i++) {
        if(i % 2 != 0) {
            for(int j=1; j<=m; j++){
                cout << "#";
            }
        }
        else {
            if((i/2) % 2 == 1) {
                for(int k=1; k<m; k++) {
                    cout << ".";
                }
                cout << "#";
            }
            else {
                cout << "#";
                for(int k=2; k<=m; k++) {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}