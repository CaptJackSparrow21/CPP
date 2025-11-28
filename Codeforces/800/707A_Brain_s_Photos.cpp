#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    bool color = false;
    char x;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y') 
                color = true;
        }
    }

    cout << (color ? "#Color" : "#Black&White") << endl;

    return 0;
}