#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    int lc = 0, uc = 0;
    for(int i=0; i < s.length(); i++) {
        if (isupper(s[i])) uc++;
        else lc++;
    }
    if (uc < lc) {
        transform (s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if(uc > lc) {
       transform (s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform (s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
}