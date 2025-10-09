#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char>unique;

    for(char c : s) {
        if(c >= 'a' && c <= 'z') {
            unique.insert(c);
        }
    }

    cout << unique.size() << "\n";
    return 0;
}