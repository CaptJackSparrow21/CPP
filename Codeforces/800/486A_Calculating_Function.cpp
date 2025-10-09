#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = (n % 2 == 0) ? (n/2) : (-(n+1) / 2) ;
    cout << sum ;
}
