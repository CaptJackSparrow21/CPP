#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long a, b;
        cin >> a >> b;

        long long r = a % b;

        if(r==0) {
            cout << "0" << endl;
        }
        else {
            cout << b - r << endl;
        }
    }
    return 0;
}