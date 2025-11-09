#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int sum = 0;
        string row;
        for(int i=0; i<10; i++) {
            cin >> row;
            for(int j=0; j<10; j++) {
                if(row[j] == 'X') {
                    int minDist = min({i, j, 9-i, 9-j});
                    sum += minDist + 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}