#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, w;
    cin >> y >> w ;

    int maximum = max(y, w);
    int num = 7 - maximum;
    int den = 6;
    int g = gcd(num, den);
    num /= g;
    den /= g;
    cout << num << "/" << den << endl;

    return 0;
    
}