//https://takeuforward.org/plus/dsa/problems/network-delay-time?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);
    
    int n, k;
    cin >> n;
    cin >> k;

    vector<vector<int>> times;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                times.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.networkDelayTime

    return 0;
}