#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b; // a - red, b - blue

    int diff = min(a,b);
    int same = abs(a-b) / 2;

    // int diff = 0, same = 0;

    // if(a>b) {
    //     diff = b;
    //     same = (a-b)/2;
    // }
    // else {
    //     diff = a;
    //     same = (b-a)/2;
    // }

    cout << diff << " " << same;
    return 0;




}