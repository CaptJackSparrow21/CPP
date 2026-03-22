#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        unordered_set<int> s;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            s.insert(x);
        }

        int distinct = s.size();

        if((n - distinct) % 2 == 0)
            cout << distinct << endl;
        else 
            cout << distinct - 1 << endl;
    }

    return 0;
}