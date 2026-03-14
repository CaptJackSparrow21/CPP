//https://takeuforward.org/plus/dsa/problems/prefix-to-infix-conversion?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    string prefixToInfix(string s) {
        stack<string> st;
        
        for(int i = s.size()-1; i>=0; i--) {
            char c = s[i];

            if(isalnum(c)) {
                st.push(string(1,c));
            }
            else {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
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

    string s; cin >> s;
    Solution sol;
    cout << sol.prefixToInfix(s);

    return 0;
}