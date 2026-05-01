//https://takeuforward.org/plus/dsa/problems/minimum-cost-to-connect-sticks?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int connectSticks(vector<int> &sticks) [
        
    ]
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> sticks;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            sticks.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.connectSticks(sticks);

    return 0;
}