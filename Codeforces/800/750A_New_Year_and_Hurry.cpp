#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    int sum = 0;
    int min = 240 - k ;
    int count = 0;

    for(int i=1; i<=n; i++) {
        sum += 5 * i;
    
        if(sum > min)
            break;
            
        count++;
}
    cout << count << endl;
    return 0;
}