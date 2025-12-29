#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int total = 0;
        for(int i=0; i<s.size(); i++) {
            vector<int> freq(26, 0);
            for(int j=i; j<s.size(); j++) {
                freq[s[j] - 'a']++;

                int maxF = 0, minF = INT_MAX;
                for(int k=0; k<26; k++) {
                    if(freq[k] > 0) {
                        maxF = max(maxF, freq[k]);
                        minF = min(minF, freq[k]);
                    }
                }
                total += maxF - minF;
            }
        }
        return total;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.beautySum(s) << endl;

    return 0;
}