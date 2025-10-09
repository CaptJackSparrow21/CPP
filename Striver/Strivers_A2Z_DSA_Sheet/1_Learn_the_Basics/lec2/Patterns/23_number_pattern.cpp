#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            int top = i;
            int bottom = (2*n-2)-i;
            int left = j;
            int right = (2*n-2)-j;

            cout << n - min({top, bottom, left, right});
        }
        cout << endl;
    }
}