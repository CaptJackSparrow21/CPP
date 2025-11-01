#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<char> seen;
        int balloons =0;
        for(char c:s) {
            if(seen.find(c) == seen.end()) {
                balloons += 2;
                seen.insert(c);
            }
            else 
                balloons += 1;
        }
        cout << balloons << endl;
    }
    return 0;
}