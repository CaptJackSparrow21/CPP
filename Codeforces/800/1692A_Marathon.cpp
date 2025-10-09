#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int a, b, c, d;
    
    for(int i=0; i<n; i++) {
        cin >> a >> b >> c >> d;
        int count = 0;
        if(a<b) count++;
        if(a<c) count++;
        if(a<d) count++;
        cout << count << endl;
    }
    return 0;
}