//https://takeuforward.org/plus/dsa/problems/sort-a-stack

#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) & SC : O(n)
class Solution {
    void insertSorted(stack<int> &st, int x) {
        if(st.empty() || x >= st.top()) {
            st.push(x);
            return ;
        }

        int topVal = st.top();
        st.pop();

        insertSorted(st, x);
        st.push(topVal);
    }

public:
    void sortStack(stack<int> &st) {
        if(st.empty()) return;

        int x = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, x);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    stringstream ss(input);
    int x;
    stack<int> st;

    while(ss >> x) {
        st.push(x);
    }

    Solution sol;
    sol.sortStack(st);

    vector<int> out;
    while(!st.empty()) {
        out.push_back(st.top());
        st.pop();
    }

    for(int i=0; i<(int)out.size(); i++) {
        cout << out[i] << (i + 1 == (int)out.size() ? "\n" : " ");
    }

    return 0;
}