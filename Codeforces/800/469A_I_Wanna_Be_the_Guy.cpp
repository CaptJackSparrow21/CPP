#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int>levels;
    int p, q;
    cin >> p;
    for(int i=0; i<p; i++){
        int x; 
        cin >> x;
        levels.insert(x);
    }

    cin >> q;
    for(int i=0; i<q; i++   ) {
        int y;
        cin >> y;
        levels.insert(y);
    }

    if(static_cast<int>(levels.size())==n) {
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}