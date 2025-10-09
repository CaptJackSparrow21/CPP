#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int distinct = 0;

    map<char, bool> mp;

    for (int i=0; i < s.size(); i++) {
        mp[s[i]] = true;
    }

    for(auto i:mp) distinct++;
    

    if (distinct % 2 == 0 ) 
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}