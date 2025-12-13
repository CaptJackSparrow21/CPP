#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int rows = mat.size();
        int cols = mat[0].size();

        int low = 0, high = (rows * cols) - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int r = mid / cols;
            int c = mid % cols;
            int val = mat[r][c];

            if(val == target) return true;
            else if(val < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
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

    for(int i=0; i<input.length(); i++) {
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

    int target; cin >> target;
    Solution s;
    bool result = s.searchMatrix(mat, target);
    cout << (result ? "True" : "False") << endl;

    return 0;
}