#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch;
    cin >> ch;

    if(ch >= 65 && ch <= 90)
        cout << "ALPHA\nIS CAPITAL";
    else if(ch >= 97 && ch <= 122)
        cout << "ALPHA\nIS SMALL";
    else 
        cout << "IS DIGIT";

    return 0;
}