//https://takeuforward.org/plus/dsa/problems/postfix-to-infix-conversion?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    string postToInfix(string postExp) {
        stack<string> st;
        for(char c : postExp) {
            if(isalnum(c)) {
                st.push(string(1,c));
            }
            else {
                string op2 = st.top();
                st.pop();
                string op1 = st.top();
                st.pop();

                string exp = "(" + op1 + c + op2 + ")";
                st.push(exp);
            }
        }
        return st.top();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string postExp;
    cin >> postExp;

    Solution sol;
    cout << sol.postToInfix(postExp);

    return 0;
}