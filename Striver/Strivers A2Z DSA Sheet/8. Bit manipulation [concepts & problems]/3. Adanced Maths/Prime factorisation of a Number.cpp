//https://takeuforward.org/plus/dsa/problems/prime-factorisation-of-a-number?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> primeFactors(vector<int> &queries) {
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<int> queries;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            queries.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<vector<inht>> ans = sol.primeFactors(queries);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[i].size; j++) {
            cout << ans[i][j];
            cout << ((j+1) == ans[i].size() ? "" : ",");
        }
        cout << "]";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}