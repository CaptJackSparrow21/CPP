#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int X = 0;
    string text;

    while (n > 0) {
        cin >> text;
        if(text == "X++" || text == "++X") {
            X++; }
        else {
            X--; }
        n--;
    }
    cout << X ;
}