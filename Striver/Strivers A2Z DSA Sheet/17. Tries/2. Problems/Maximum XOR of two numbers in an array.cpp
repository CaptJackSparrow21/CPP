//https://takeuforward.org/practice/dsa/maximum-xor-of-two-numbers-in-an-array

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int findMaximumXOR(vector<int> &nums) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> nums;
    string temp;
    for(char c : s) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.findMaximumXOR(nums);

    return 0;
}