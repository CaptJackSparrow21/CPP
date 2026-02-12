#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> result;
        
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while(top <= bottom && left <= right) {
            //1. move left to right on the current top row
            for(int i=left; i<=right; i++) 
                result.push_back(matrix[top][i]);
                top++;

            //2. move top to bottom on current right column
            for(int i=top; i<=bottom; i++)
                result.push_back(matrix[i][right]);
                right--;

            //3. move right to left on current bottom row
            if(top <= bottom) {
                for(int i=right; i>=left; i--)
                    result.push_back(matrix[bottom][i]);
                    bottom--;
            }
            //4. move bottom to top on current 
            if(left <= right) {
                for(int i=bottom; i>=top; i--)
                    result.push_back(matrix[i][left]);
                    left++;
            }
        }
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n ;
    cin.ignore();

    string line;
    getline(cin, line);
    stringstream ss(line);
    string group;

    vector<vector<int>> matrix;

    while(getline(ss, group, ',')) {
        stringstream gss(group);
        vector<int> row;
        int num;
        while(gss >> num) row.push_back(num);
        matrix.push_back(row);
    } 
    
    Solution s;
    auto ans = s.spiralOrder(matrix);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size()-1) cout << ", ";
    }
    cout << "]";

    return 0;
}
