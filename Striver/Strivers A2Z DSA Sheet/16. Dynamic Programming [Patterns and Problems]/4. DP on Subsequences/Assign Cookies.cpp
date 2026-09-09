//https://takeuforward.org/plus/dsa/problems/assign-cookies?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n log n + m log m)
class Solution {
public:
    int findMaximumCookieStudents(vector<int> &Student, vector<int> &Cookie) {
        sort(Student.begin(), Student.end());
        sort(Cookie.begin(), Cookie.end());

        int i=0, j=0, cnt=0;
        while(i < Student.size() && j < Cookie.size()) {
            if(Cookie[j] >= Student[i]) {
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
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