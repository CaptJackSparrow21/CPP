//https://takeuforward.org/plus/dsa/problems/single-number---iii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = O(n) && SC = O(1)
class Solution{
public:
    vector<int> singleNumber(vector<int> &nums) {
        int xor_all = 0;
        for(int x : nums) xor_all ^= x;

        int mask = xor_all & -xor_all;
        int a = 0, b = 0;
        for(int x : nums) {
            if(x & mask) a ^= x;
            else b ^= x;
        }
        return {min(a,b), max(a,b)};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution sol;
    vector<int> ans = sol.singleNumber(nums);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";
    
    return 0;
}