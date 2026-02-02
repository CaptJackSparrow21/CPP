//https://takeuforward.org/plus/dsa/problems/reverse-a-stack

#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) & SC : O(n)
class Solution {
    void insertAtBottom(stack<int> &st, int x) {
        if(st.empty()) {
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();
        insertAtBottom(st, x);
        st.push(temp);
    }

public :
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        int x = st.top();
        st.pop();

        reverseStack(st);
        insertAtBottom(st, x);
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
    sol.reverseStack(st);

    vector<int> out;
    while(!st.empty()) {
        out.push_back(st.top());
        st.pop();
    }

    for(int i=(int)out.size() - 1; i>=0; i--) {
        cout << out[i] << " ";
    }

    return 0;
}