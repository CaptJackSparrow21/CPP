#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        for(int i=0; i<m; i++) {
            // 1. transpose
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //2. reverse every row
        for(int i=0; i<m; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
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
    s.rotateMatrix(matrix);

    cout << "[";
    for(int i=0; i<m; i++) {
        cout << "[";
        for(int j=0; j<n; j++){
            cout << matrix[i][j];
            if(j != n-1) cout << ", ";
        }
        cout << "]";
        if(i != m-1) cout << ", ";
    }
    cout << "]";

    return 0;
}