#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int height = 0, used = 0, need = 0;

    while(used <= n) {
        height++;
        need = (height * (height + 1)) / 2;
        used  = used + need;
    }
    cout << height - 1 << endl;
    return 0;
    
}