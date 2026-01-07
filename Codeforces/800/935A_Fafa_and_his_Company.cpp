#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int count = 0;
    for(int i=1; i<n; i++) {
        int partition = ((n - 1) / i );
        int sum = i + (partition) * i;
        if(sum == n) count++; 
    }
    cout << count << endl;

    return 0;
}