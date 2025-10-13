#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 == 0 ) return false;
    for(int i=3; i*i<=n; i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;    

    for(int a=4; a<=n-4; a++){
        int b = n-a;
        if(!isPrime(a) && !isPrime(b)) {
            cout << a << " " << b;
            return 0;
        }
    }
    return 0;
}