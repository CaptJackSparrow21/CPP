#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a > b) {
            cout << "First\n";
        }
        else if(a < b) {
            cout << "Second\n";
        }
        else if(a == b) {
            if(c % 2 == 0) {
                cout << "Second\n";
            } 
            else if (c % 2 == 1){
                cout << "First\n";
            }
        }
    }

    return 0;
}