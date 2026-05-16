//https://takeuforward.org/plus/dsa/problems/non-overlapping-intervals?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(1)
class Solution {
public:
    int MaximumNonOverlappingIntervals(vector<vector<int>> &Intervals) {
        sort(Intervals.begin(), Intervals.end(), 
        [] (vector<int> &a, vector<int> &b) {
            return a[1] < b[1];
        });

        int count = 1;

        int lastEnd = Intervals[0][1];
        for(int i=1; i<Intervals.size(); i++) {
            if(Intervals[i][0] >= lastEnd) {
                count++;
                lastEnd = Intervals[i][1];
            }
        }
        return Intervals.size() - count;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    getline(cin, s1);

    vector<vector<int>> Intervals;
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
    
    Solution sol;
    cout << sol.MaximumNonOverlappingIntervals(Intervals);

    return 0;
}