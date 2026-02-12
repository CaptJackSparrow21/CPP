#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0; i<numRows; i++) {
            vector<int> row(i+1, 1);
            for(int j=1; j<i; j++) {
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
}; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numRows; cin >> numRows;
    
    Solution s;
    auto ans = s.generate(numRows);

    cout << "[";
    for(int i=0; i<ans.size(); i++){
        cout << "[";
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j];
            if(j < ans[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i < ans.size() - 1) cout << ",";
    }
    cout << "]";
    return 0;
}