#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    // vector<double>p(n);
    double sum = 0.0, x;
    for(int i=0; i<n; i++) {
        cin >> x;
        sum += x;
    }

    double result = sum /n ;
    cout << fixed << setprecision(12) << result << endl;
    return 0;
}