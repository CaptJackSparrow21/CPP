#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    string a[10] = {"Greater than 9", "one", "two", "three", "four"
        , "five", "six", "seven", "eight", "nine"};
    
    if(n > 9)
        cout << a[0];
    else 
        cout << a[n];
        
    return 0;
}
