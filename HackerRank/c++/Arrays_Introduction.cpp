#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> a(n);
    
    for(int &i : a) cin >> i;
    for(int i=n-1; i>=0; i--) {
        cout << a[i];
        cout << ((i-1) == -1 ? "" : " ");
    }
    
    
    return 0;
}
