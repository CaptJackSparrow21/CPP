//https://takeuforward.org/plus/dsa/problems/celebrity-problem?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(n)
class Solution {
public:
    int celebrity(vector<vector<int>> &M) {
        int n = M.size();
        stack<int> st;

        for(int i=0; i<n; i++) st.push(i);
        while(st.size() > 1) {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            if(M[a][b] == 1) 
                st.push(b);
            else 
                st.push(a);
        }

        int candidate = st.top();

        for(int i=0; i<n; i++) {
            if(i != candidate) {
                if(M[candidate][i] == 1 || M[i][candidate] == 0)
                    return -1;
            }
        }
        return candidate;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    vector<vector<int>> M;
    vector<int> curr_row;
    string num = "";

    for(int i=0; i<input.size(); i++) {
        char ch = input[i];

        if(ch >= '0' && ch <='9')
            num += ch;

        else if((ch == ',' || ch == ']') && !num.empty()) {
            curr_row.push_back(stoi(num));
            num = "";

            if(ch == ']') {
                M.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.celebrity(M);

    return 0;
}