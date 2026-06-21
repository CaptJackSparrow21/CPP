#include<bits/stdc++.h>
using namespace std;
#define int long long

int prime[1000000000000];    
void precompute() {
    prime[2] = 1;
   for(int i=2; i<=1000000000000; i++) {
    for(int j=i*i; j<=1000000000000; j+=i) {
        if(j % i == 0)
    }
   } 
}
bool isprime(int n) {
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;
    for(int i=3; i*i<=n; i+=2) {
        if(n % i == 0)
            return false;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    if(isprime(n))
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}