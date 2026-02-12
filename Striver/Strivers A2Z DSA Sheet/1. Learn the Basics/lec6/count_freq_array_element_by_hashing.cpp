#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
        vector<vector<int>> countFrequencies(vector<int> &nums) {
            //counting frequencies
            map<int, int>freq;
            for(int i : nums) {
                freq[i]++;
            }

            //convert map to vector of pairs
            vector<vector<int>> result;
            for(auto &n : freq) {
                result.push_back({n.first, n.second});
            }
            return result;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<int>nums;
    int n;
    while(ss >> n) nums.push_back(n);

    if(nums.empty()) {
        cout << "Wrong input.";
        return 0;
    }

    Solution s;
    auto ans = s.countFrequencies(nums);

    cout << "[" ;
    for(size_t i =0; i<ans.size(); i++) {
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "]" ;  
        if(i+1 < ans.size()) cout << ", ";
    }
    cout << "]\n";
    return 0;
}