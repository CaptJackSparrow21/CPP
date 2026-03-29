//https://takeuforward.org/plus/dsa/problems/maximum-rectangles?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(m * n) && SC = O(n) 
class Solution {
public:
    int largestRectangleArea(vector<int> &h) {
        stack<int> st;
        int n = h.size(), ans = 0;

        for(int i=0; i<=n; i++) {
            while(!st.empty() && (i == n || h[st.top()] >= h[i])) {
                int height = h[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        return ans;
    }

    int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        vector<int> h(n, 0);

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) 
                h[j] = matrix[i][j] ? h[j] + 1 : 0;

            ans = max(ans, largestRectangleArea(h));
        }
        return ans;
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

        if(ch >= '0' && ch <= '9') 
            num += ch;
        
        else if((ch == ',' || ch == ']') && !num.empty()) {
            curr_row.push_back(stoi(num));
            num = "";

            if(ch == ']') {
                matrix.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.maximalAreaOfSubMatrixOfAll1(matrix);

    return 0;
}