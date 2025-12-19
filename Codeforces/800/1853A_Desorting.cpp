#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        bool sorted = true;
        int diff = INT_MAX;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(i > 0) {
                diff = min(diff, a[i] - a[i-1]);
                sorted &= a[i] >= a[i-1];      
                //sorted = sorted && a[i] >= a[i-1] 
            }
        }
        if(!sorted){
            cout << "0" << endl;
        }
        else {
            cout << (diff / 2) + 1 << endl;     // ceil value of diff / 2
        }

    }

    return 0;
}