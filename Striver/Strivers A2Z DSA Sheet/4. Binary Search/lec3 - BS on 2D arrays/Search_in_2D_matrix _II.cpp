#include<bits/stdc++.h>
using namespace std;

//Optimal apparoach -> TC : O(n+m) || SC : O(1)
class Solution{
public:
 bool searchMatrix(vector<vector<int>> &matrix, int target){
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0, cols = n - 1;
        while(row < m && cols >= 0) {
            if(matrix[row][cols] == target) return true;
            else if(matrix[row][cols] < target) row++;
            else cols--;
        }
        return false;
    }
};

//Binary Approach -> TC : O(n log m) || TC : O(1)
// Slower for bigger matrices
// class Solution{
// public:
//  bool searchMatrix(vector<vector<int>> &matrix, int target){
//         int m = matrix.size();
//         int n = matrix[0].size();

//         for(int i=0; i<m; i++) {
//             int low = 0, high = n - 1;
//             while(low <= high) {
//                 int mid = low + (high - low) / 2;
//                 if(matrix[i][mid] == target) return true;
//                 else if(matrix[i][mid] < target) low = mid + 1;
//                 else high = mid - 1;
//             }
//         }
//         return false;
//     }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    vector<vector<int>> matrix;
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
                    matrix.push_back(curr_row);
                    curr_row.clear();
                }
            }
        }

        int target; cin >> target;
        Solution s;
        bool result = s.searchMatrix(matrix, target);
        cout << (result ? "True" : "False") << endl;

    return 0;
}