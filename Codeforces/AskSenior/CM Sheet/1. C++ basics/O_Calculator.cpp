#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char ch;

    cin >> a >> ch >> b;

    if(ch == '+')
        cout << a + b << endl;
    else if(ch == '-')
        cout << a - b << endl;
    else if(ch == '*')
        cout << a * b << endl;
    else 
        cout << a / b << endl;

    return 0;
}