#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int current = 0, max_capacity = 0 ;

    for(int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;

        current = current - a;
        current = current + b;
        max_capacity = max(current, max_capacity);
    }
    cout << max_capacity << endl;
}