#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int max_index = 0; // leftmost maximum
    int min_index = 0; // rightmost minimum

    for(int i=0; i<n; i++) {
        if(a[i] > a[max_index]) max_index = i;
        if(a[i] <= a[min_index]) min_index = i;
    }

    int ans = max_index + (n-1 - min_index) + (max_index > min_index ? -1:0);
    cout << ans << "\n";

}