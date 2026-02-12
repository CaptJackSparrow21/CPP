#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        // 1. checking if first row/col needs to be zeroed
        for(int j=0; j<n; j++) if(matrix[0][j]==0) firstRowZero = true;
        for(int i=0; i<m; i++) if(matrix[i][0]==0) firstColZero = true;

        // 2. using first row and col as markers
        for(int i=1; i<m; i++) for(int j=1; j<n; j++)
            if(matrix[i][j]==0)
                matrix[i][0] = 0, matrix[0][j] = 0;

        //3. setting marked cells to zero
        for(int i=1; i<m; i++) for(int j=1; j<n; j++)
            if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j] = 0;

        //4/ handling first row/col if needed
        if(firstRowZero) for(int j=0; j<n; j++) matrix[0][j] = 0;
        if(firstColZero) for(int i=0; i<m; i++) matrix[i][0] = 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n; // m-> #rows, n-> #columns
    cin >> m >> n;
    cin.ignore(); // ignore new line after dimensions

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
    s.setZeroes(matrix);

    cout << "[";
    for(int i=0; i<m; i++) {
        cout << "[";
        for(int j=0; j<n; j++){
            cout << matrix[i][j];
            if(j != n-1) cout << ",";
        }
        cout << "]";
        if(i != m-1) cout << ",";
    }
    cout << "]";

    return 0;
}