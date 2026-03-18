//https://takeuforward.org/plus/dsa/problems/infix-to-prefix-conversion?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    int prec(char c) {
        if(c == '+' || c == '-') return 1;
        if(c == '*' || c == '/') return 2;
        return 0;
    }

    string infixToPrefix(const string &s) {
        string rev = s;

        reverse(rev.begin(), rev.end());

        for(char &c : rev) {
            if(c == '(') c = ')';
            else if(c == ')') c = '(';
        }

        stack<char> st;
        string postfix = "";

        for(char c : rev) {
            if(isalnum(c)) {
                postfix += c;
            }
            else if(c == '(')
                st.push(c);
            else if(c == ')') {
                while(!st.empty() && st.top() != '(') {
                    postfix += st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while(!st.empty() && prec(st.top()) >= prec(c)) {
                    postfix += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while(!st.empty()) {
            postfix += st.top();
            st.pop();
        }

        reverse(postfix.begin(), postfix.end());
        return postfix;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;

    cout << sol.infixToPrefix(s);

    return 0;
}