#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        vector<string> a;
        for(int i=1; i<9; i++) {
            string z = string(1, s[0]) + to_string(i);
            a.push_back(z);
        }

        for(char ch='a'; ch<='h'; ch++) {
            string z = string(1, ch) + to_string(s[1] - '0');
            a.push_back(z);
        }

        a.erase(remove(a.begin(), a.end(), s), a.end());

        for(int i=0; i<a.size(); i++) {
            cout << a[i] << "\n";
        }

        cout << endl;
    }

    return 0;
}