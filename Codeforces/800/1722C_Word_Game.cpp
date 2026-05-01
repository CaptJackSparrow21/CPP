#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<string>> w(3, vector<string> (n));
        unordered_map<string, int> freq;

        for(int i=0; i<3; i++)
            for(int j=0; j<n; j++) {
                cin >> w[i][j];
                freq[w[i][j]]++;
            }

        for(int i=0; i<3; i++) {
            ll score = 0;
            for(int j=0; j<n; j++) {
                if(freq[w[i][j]] == 1) score += 3;
                else if(freq[w[i][j]] == 2) score += 1;
            }
            cout << score << " \n"[i==2];
        }
        freq.clear();
    }

    return 0;
}