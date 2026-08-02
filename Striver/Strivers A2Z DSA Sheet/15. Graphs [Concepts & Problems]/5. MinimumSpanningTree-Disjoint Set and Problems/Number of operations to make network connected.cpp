//https://takeuforward.org/plus/dsa/problems/number-of-operations-to-make-network-connected?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((n+m)α(n)) && SC = O(n)
//α(n) (inverse Ackermann function)
class Solution {
public:
    int solve(int n, vector<vector<int>> &Edge) {
        parent.resize(n);
        sz.assign
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    vector<vector<int>> Edge;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                Edge.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.solve(n, Edge);

    return 0;
}