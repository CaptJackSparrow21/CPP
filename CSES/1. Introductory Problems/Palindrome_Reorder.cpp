#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    vector<int> freq(26, 0);
    for(char c : s)
        freq[c - 'A']++;

    string left, mid, right;

    for(int i=0; i<26; i++) {
        if(freq[i] % 2 == 1) {
            if(!mid.empty()) {
                cout << "NO SOLUTION\n";
                return 0;
            }
            mid = string(1, char('A' + i));
        }
        left += string(freq[i] / 2, char('A' + i));
    }

    right = left;
    reverse(right.begin(), right.end());

    cout << left << mid << right;

    return 0;
}