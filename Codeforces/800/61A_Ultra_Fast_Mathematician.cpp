#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if(a.size() != b.size()) return 0;
    string ans = "";

    for(int i=0; i<a.size(); i++) {
        if(a[i] == b[i]){
            ans += '0';
        }
        else {
            ans += '1' ;
        }
    }
    cout << ans;
}