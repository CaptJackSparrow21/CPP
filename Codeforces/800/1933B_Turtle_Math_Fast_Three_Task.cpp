#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sum = 0, c1 = 0;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            sum += x;
            if(x % 3 == 1) c1++;
        }

        int r = sum % 3;

        if(r == 0)
            cout << 0 << endl;
        else if(r == 2)
            cout << 1 << endl;
        else { //r == 1
            if(c1 >= 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}