#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;
        
        int side1 = max({x1, x2, x3, x4});
        int side2 = min({x1, x2, x3, x4});
        int side = side1 - side2;
        cout << side * side << endl;
    }

    return 0;
}