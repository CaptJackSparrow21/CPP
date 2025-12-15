#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = (low + high) / 2;
            int maxRow = 0;
            for(int i=1; i<m; i++) {
                if(mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int curr = mat[maxRow][mid];
            int left = (mid - 1 >= 0 ? mat[maxRow][mid-1] : -1);
            int right = (mid + 1 < n ? mat[maxRow][mid+1] : -1);

            if(curr > left && curr > right) {
                return {maxRow, mid};
            }
            else if(left > curr) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    vector<vector<int>> mat;
    vector<int> curr_row;
    string num = "";

    for(int i=0; i<input.size(); i++) {
        char ch = input[i];

        if(ch >= '0' && ch <= '9') {
            num += ch;
        }
        else if((ch == ',' || ch == ']') && !num.empty()) {
            curr_row.push_back(stoi(num));
            num = "";

            if(ch == ']') {
                mat.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution s;
    vector<int> result = s.findPeakGrid(mat);
    cout << "[";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << ((i == result.size() - 1) ? "" : ",");
    }
    cout << "]";

    return 0;
}