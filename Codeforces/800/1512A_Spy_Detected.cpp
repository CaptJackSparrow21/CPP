#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int common;
        if(arr[0]==arr[1] || arr[0]==arr[2]){
            common = arr[0];
        }
        else {
            common = arr[1];
        }

        for(int i=0; i<arr.size(); i++) {
            if(arr[i] != common) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}