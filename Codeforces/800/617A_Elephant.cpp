#include <bits/stdc++.h>
using namespace std; 

int main () {
    int x; cin >> x;

    int steps = 0;

    while(x >= 5) {
        steps++;
        x -= 5;
    }

    if (x == 0) 
        cout << steps << endl;
    else 
        cout << steps + 1 << endl;
}