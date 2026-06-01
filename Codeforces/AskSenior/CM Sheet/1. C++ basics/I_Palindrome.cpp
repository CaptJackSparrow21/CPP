#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n; cin >> n;
    
    ll org = n;
    ll rev = 0;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << rev << endl;    

    if(org == rev)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}