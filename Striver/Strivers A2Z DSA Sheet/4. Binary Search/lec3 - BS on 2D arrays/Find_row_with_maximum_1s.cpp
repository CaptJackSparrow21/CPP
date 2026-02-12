#include<bits/stdc++.h>
using namespace std;

//Optimal Traversal
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
        int m = mat.size();
        if(m == 0) return -1;
        int n = mat[0].size();

        int maxRowIndex = -1;
        int maxCount = 0;

        int row = 0, col = n-1;
        while(row < m && col >= 0) {
          if(mat[row][col] == 1) {
            col--;
            maxRowIndex = row;
            maxCount = n - (col + 1);
          }
          else {
            row++;
          }
        }
        return maxRowIndex;
    }
};

//Binary Approach
// class Solution {
//   public:   
//   int rowWithMax1s(vector < vector < int >> & mat) {
//       int m = mat.size();
//       if(m == 0) return -1;
//       int n = mat[0].size();

//       int maxRowIndex = -1;
//       int maxCount = 0;

//       for(int i=0; i<m; i++) {
//         int left = 0, right = n-1;
//         int firstOneIndex = n;

//         while(left <= right) {
//           int mid = left + (right - left) / 2;
//           if(mat[i][mid] == 1) {
//             firstOneIndex = mid;
//             right = mid - 1;
//           }
//           else {
//             left = mid + 1;
//           }
//         }
//         int countOnes = n - firstOneIndex;
//         if(countOnes > maxCount) {
//           maxCount = countOnes;
//           maxRowIndex = i;
//         }
//       }
//       return maxRowIndex;
//   }
// };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for(int i=0; i<s.size(); i++) {
      if(s[i] == '[' || s[i] == ']' || s[i] == ',') {
        s[i] = ' ';
      }
    }

    stringstream ss(s);
    vector<vector<int>> mat;
    vector<int> row;
    int x;
    int col = 3;

    while(ss >> x) {
      row.push_back(x);
      if(row.size() == col) {
        mat.push_back(row);
        row.clear();
      }
    }

    Solution sol;
    cout << sol.rowWithMax1s(mat) << endl;

    return 0;
}