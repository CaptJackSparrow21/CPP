//https://takeuforward.org/plus/dsa/problems/postfix-to-prefix-conversion?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    string postToPre(string postfix) {
        stack<string> st;
        for(char c : postfix) {
            if(isalnum(c)) {
                st.push(string(1, c));
            }
            else {
                string op2 = st.top();
                st.pop();
                string op1 = st.top();
                st.pop();

                string temp = c + op1 + op2;
                st.push(temp);
            }
        }
        return st.top();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string postfix; cin >> postfix;
    Solution sol;
    cout << sol.postToPre(postfix);

    return 0;
}