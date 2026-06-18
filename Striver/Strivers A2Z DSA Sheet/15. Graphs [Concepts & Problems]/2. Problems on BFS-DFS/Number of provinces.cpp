//https://takeuforward.org/plus/dsa/problems/number-of-provinces?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int numProvinces(vector<vector<int>> adj) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);

    vector<vector<int>> adj;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9') 
            temp +=c ;
            
        else if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                adj.push_back(curr__row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.numProvinces(adj);

    return 0;
}