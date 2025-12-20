#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        char arr[3][3];
        int a=0, b=0, c=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin >> arr[i][j];
                if(arr[i][j] == 'A') a++;
                else if(arr[i][j] == 'B') b++;
                else if(arr[i][j] == 'C') c++; 
            }
        }
        
        if(a < 3) cout << "A\n";
        else if(b < 3) cout << "B\n";
        else cout << "C\n";
    }

    return 0;
}