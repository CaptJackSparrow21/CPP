#include <bits/stdc++.h>
using namespace std;

bool distinct_digits(int y) {
    string s = to_string(y);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size();
}

int main() {
    int y;
    cin >> y;

    while(true) {
        y++;
        if(distinct_digits(y)){
            cout << y << endl;
            break;
        }
    }
    return 0;
}