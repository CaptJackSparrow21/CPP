//https://takeuforward.org/plus/dsa/problems/n-meetings-in-one-room?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    int maxMeetings(vector<int> &start, vector<int> &end) {
        int n = start.size();
        vector<pair<int, int>> meetings;

        for(int i=0; i<n; i++)
            meetings.push_back({end[i], start[i]});

        sort(meetings.begin(), meetings.end());

        int cnt = 1;
        int lastEnd = meetings[0].first;

        for(int i=1; i<n; i++) {
            int s = meetings[i].second;
            int e = meetings[i].first;

            if(s > lastEnd) {
                cnt++;
                lastEnd = e;
            }
        }
        return cnt;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());

    s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
    s2.erase(remove(s2.begin(), s2.end(), ']'), s2.end());

    stringstream ss1(s1);
    string temp1;
    vector<int> start;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty())
            start.push_back(stoi(temp1));
    }

    stringstream ss2(s2);
    string temp2;
    vector<int> end;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            end.push_back(stoi(temp2));
    }
    
    Solution sol;
    cout << sol.maxMeetings(start, end);

    return 0;
}