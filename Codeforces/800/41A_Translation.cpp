#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int l = s.length()-1;
    int j = t.length()-1;

    if (l != j) {
        cout << "NO";
        return 0;
    }
    for(int i=0; i<=l; i++) {
         
            if(s[i] != t[l-i]){
                cout << "NO";
                return 0;
    }
    }
    cout << "YES" ;
}