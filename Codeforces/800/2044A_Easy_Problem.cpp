#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    /*For any n, Cube can set a = any integer between 1 and n−1 inclusive, 
    and set b=n−a. a cannot be less than 1, because then it would be non-positive,
    and a cannot be greater than n−1, because then b would be less than 1, 
    which would make it non-positive. Therefore the answer is just n−1 for all n.*/

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << n-1 << endl;
    }

    return 0;
}