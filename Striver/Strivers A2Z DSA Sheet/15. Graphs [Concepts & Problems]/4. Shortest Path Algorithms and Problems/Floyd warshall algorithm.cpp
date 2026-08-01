//https://takeuforward.org/plus/dsa/problems/floyd-warshall-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V^3) && SC = O(1)
class Solution {
public:
    void shortestDistance(vector<vector<int>> &matrix) {
        int n = matrix.size();
        const int inf = 1e9;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == -1)
                    matrix[i][j] = inf;
            }
        }

        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(matrix[i][k] != inf &&
                       matrix[k][j] != inf) {
                        matrix[i][j] = min(matrix[i][j],
                        matrix[i][k] + matrix[k][j]);
                    }
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == inf)
                    matrix[i][j] = -1;
            }
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> matrix;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                matrix.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    sol.shortestDistance(matrix);

    cout << '[';
    for(int i=0; i<matrix.size(); i++) {
        cout << '[';

        for(int j=0; j<matrix.size(); j++) {
            cout << matrix[i][j];
            if(j+1 != matrix[i].size())
                cout << ',';
        }
        cout << ']';
        if(i+1 != matrix.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}