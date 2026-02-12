#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2 = 0;
        int e1 = INT_MIN, e2 = INT_MIN;
        for(int i=0; i<n; i++) {
            if(nums[i] == e1) c1++;
            else if(nums[i] == e2) c2++;
            else if(c1 == 0) {
                e1 = nums[i];
                c1 = 1;
        }
            else if(c2 == 0) {
                e2 = nums[i];
                c2 = 1;
            }
            else{
                c1--; c2--;
            }
    }

        c1 = c2 = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == e1) c1++;
            else if(nums[i] == e2) c2++;
        }

        vector<int> result;
        if(c1 > (n/3)) result.push_back(e1);
        if(c2 > (n/3)) result.push_back(e2);
        sort(result.begin(), result.end());
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    // remove '[', ']'
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    vector<int> nums;
    stringstream ss(input);
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution s;

    vector<int> ans = s.majorityElementTwo(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size()-1) cout << ",";
    }
    cout << "]";

    return 0;
}