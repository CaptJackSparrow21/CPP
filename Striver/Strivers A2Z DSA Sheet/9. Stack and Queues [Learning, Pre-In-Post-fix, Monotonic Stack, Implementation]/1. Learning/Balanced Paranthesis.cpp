//https://takeuforward.org/plus/dsa/problems/balanced-paranthesis?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        for(char c : str) {
            if(c == '[' || c == '(' || c == '{')
                st.push(c);
            else {
                if(st.empty()) return false;

                char top = st.top();

                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{'))
                    st.pop();
                else 
                    return false;
            }
        }
        return st.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    Solution sol;
    cout << boolalpha << sol.isValid(str);

    return 0;
}