#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = INT_MAX, high = INT_MIN;
        for(int i=0; i<m; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][n-1]);
        }

        int median = (m * n + 1) / 2;
        
        while(low < high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;

            for(int i=0; i<m; i++) {
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid)
                         - matrix[i].begin();
            }

            if(cnt < median) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};

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

    Solution s;
    cout << s.findMedian(matrix) << endl;

    return 0;
}