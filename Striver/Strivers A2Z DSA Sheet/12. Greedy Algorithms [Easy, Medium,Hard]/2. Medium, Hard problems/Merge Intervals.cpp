//https://takeuforward.org/plus/dsa/problems/merge-intervals?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++) {
            vector<int> &curr = intervals[i];
            vector<int> &last = ans.back();

            if(curr[0] <= last[1]) 
                last[1] = max(last[1], curr[1]);
            else 
                ans.push_back(curr);
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    getline(cin, s1);

    vector<vector<int>> intervals;

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
        intervals.push_back({nums[i], nums[i+1]});

    Solution sol;
    vector<vector<int>> ans = sol.mergeIntervals(intervals);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[" << ans[i][0] << "," << ans[i][1] << "]";

        if(i != ans.size()-1)
            cout << ",";
    }
    cout << "]";

    return 0;
}