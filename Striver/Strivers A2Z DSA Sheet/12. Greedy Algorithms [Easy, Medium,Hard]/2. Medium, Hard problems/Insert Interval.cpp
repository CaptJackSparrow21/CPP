//https://takeuforward.org/plus/dsa/problems/insert-interval?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(n)
class Solution {
public:
    vector<vector<int>> insertNewInterval(vector<vector<int>> &Intervals, vector<int> &newInterval) {
        vector<vector<int>> ans;
        for(auto interval : Intervals) {
            if(interval[1] < newInterval[0])
                ans.push_back(interval);

            else if(interval[0] > newInterval[1]) {
                ans.push_back(newInterval);
                newInterval = interval;
            }
            else {
                newInterval[0] = min(newInterval[0], interval[0]);
                newInterval[1] = max(newInterval[1], interval[1]);
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);

    vector<vector<int>> Intervals;
    vector<int> newInterval;

    vector<int> nums;
    string temp = "";

    for(char c : s1) {
        if(isdigit(c))
            temp += c;
        else {
            if(temp != "") {
                nums.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    for(int i=0; i<nums.size(); i+=2) 
        Intervals.push_back({nums[i], nums[i+1]});

    for(char c : s2) {
        if(isdigit(c)) 
            temp += c;
        else {
            if(temp != "") {
                newInterval.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.insertNewInterval(Intervals, newInterval);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[" << ans[i][0] << "," << ans[i][1] << "]";

        if(i != ans.size() - 1)
            cout << ",";
    }
    cout << "]";

    return 0;
}