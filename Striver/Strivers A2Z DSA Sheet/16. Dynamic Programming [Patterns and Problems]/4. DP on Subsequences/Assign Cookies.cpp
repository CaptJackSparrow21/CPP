//https://takeuforward.org/plus/dsa/problems/assign-cookies?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int findMaximumCookieStudents(vector<int> &Student, vector<int> &Cookie) {

    }
};

vector<int> getArray(string s) {
    vector<int> ans;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            ans.push_back(stoll(temp));
            temp = "";
        }
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    getline(cin, s);
    getline(cin, t);

    vector<int> Student = getArray(s);
    vector<int> Cookie = getArray(t);

    Solution sol;
    cout << sol.findMaximumCookieStudents(Student, Cookie);

    return 0;
}