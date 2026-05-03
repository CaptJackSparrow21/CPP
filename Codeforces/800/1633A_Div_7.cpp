#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        if(n % 7 == 0)
            cout << n << endl;
        else {
            int prefix = n / 10; //remove last digit

            for(int d=0; d<=9; d++) {
                int num = prefix * 10 + d;
                if(num % 7 == 0) {
                    cout << num << endl;
                    break;
                }
            }
        }
    }

    return 0;
}