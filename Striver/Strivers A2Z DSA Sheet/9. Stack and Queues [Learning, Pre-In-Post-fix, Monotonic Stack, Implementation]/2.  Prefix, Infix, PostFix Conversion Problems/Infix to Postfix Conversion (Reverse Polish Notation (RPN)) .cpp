///https://takeuforward.org/plus/dsa/problems/infix-to-postfix-conversion?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    int prec(char c) {
        if(c == '^') return 3;
        if(c == '*' || c == '/') return 2;
        if(c == '+' || c == '-') return 1;
        return -1;
    }

    string infixToPostfix(string s) {
        stack<char> st;
        string ans = "";

        for(char c : s) {
            if(isalnum(c)) ans += c;

            else if(c == '(') st.push(c);
            else if(c == ')') {
                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }

            else {
                while(!st.empty() && 
                    (prec(st.top()) > prec(c) || 
                    (prec(st.top()) == prec(c) && c != '^'))) {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(c);
            }
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;
    cout << sol.infixToPostfix(s);  

    return 0;
}