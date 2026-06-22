#include<bits/stdc++.h>
using namespace std;

int maxMizingXOR(int l, int r) {
    int x = l ^ r;
    int msb = 0;
    
    while(x > 0) {
        msb++;
        x >>= 1;
    }
    
    return (1 << msb) - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int l, r;
    cin >> l >> r;
    
    cout << maxMizingXOR(l, r) << endl;
    
    return 0;
}
