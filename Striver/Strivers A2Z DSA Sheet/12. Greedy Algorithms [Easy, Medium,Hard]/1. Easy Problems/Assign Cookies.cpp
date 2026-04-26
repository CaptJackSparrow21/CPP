//https://takeuforward.org/plus/dsa/problems/assign-cookies?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n long n + m long m) sorting both arrays
//SC = O(1)
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string i, j;
    getline(cin, i);
    getline(cin, j);
    
    i.erase(remove(i.begin(), i.end(), '['), i.end());
    i.erase(remove(i.begin(), i.end(), ']'), i.end());

    j.erase(remove(j.begin(), j.end(), '['), j.end());
    j.erase(remove(j.begin(), j.end(), ']'), j.end());

    stringstream ss1(i);
    string temp1;
    vector<int> Student;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty())
            Student.push_back(stoi(temp1));
    }

    stringstream ss2(j);
    string temp2;
    vector<int> Cookie;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            Cookie.push_back(stoi(temp2));
    }

    Solution sol;
    cout << sol.findMaximumCookieStudents(Student, Cookie);

    return 0;
}