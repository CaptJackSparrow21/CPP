//https://takeuforward.org/plus/dsa/problems/shortest-job-first?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    long long solve(vector<int> &bt) {
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(),'['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> bt;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            bt.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.solve(bt);

    return 0;
}