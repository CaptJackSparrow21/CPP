#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        if(s.size() == 2) {
            cout << s << endl;
        }
        else {
            for(int i=0; i<n-2; i+=2){
                cout << s[i];
            }
            cout << s[n-2] << s[n-1];
            cout << endl;
        }
    }
    return 0;
}