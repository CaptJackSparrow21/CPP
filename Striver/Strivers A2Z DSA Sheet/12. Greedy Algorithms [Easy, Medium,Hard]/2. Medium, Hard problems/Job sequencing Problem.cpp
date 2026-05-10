//https://takeuforward.org/plus/dsa/problems/job-sequencing-problem?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n + n * D)
//SC = O(D) where: D=maxDeadline
class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[2] > b[2];
    }

    vector<int> JobScheduling(vector<vector<int>> &Jobs) {
        sort(Jobs.begin(), Jobs.end(), cmp);

        int maxD = 0;
        for(auto &job : Jobs)
            maxD = max(maxD, job[1]);

        vector<int> slot(maxD + 1, -1);

        int countJobs = 0;
        int totalProfit = 0;

        for(auto &job : Jobs) {
            int id = job[0];
            int deadline = job[1];
            int profit = job[2];

            for(int j=deadline; j>=1; j--) {
                if(slot[j] == -1) {
                    slot[j] = id;
                    countJobs++;
                    totalProfit += profit;

                    break;
                }
            }
        }
        return {countJobs, totalProfit};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    vector<int> nums;
    string temp = "";

    for(char ch : s) {
        if (isdigit(ch)) {
            temp += ch;
        }
        else {
            if(!temp.empty()) {
                nums.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    if(!temp.empty())
        nums.push_back(stoi(temp));

    vector<vector<int>> Jobs;

    for(int i=0; i<nums.size(); i+=3) {
        Jobs.push_back({
            nums[i],
            nums[i+1],
            nums[i+2]
        });
    }

    Solution sol;
    vector<int> ans = sol.JobScheduling(Jobs);
    cout << ans[0] << " " << ans[1];

    return 0;
}