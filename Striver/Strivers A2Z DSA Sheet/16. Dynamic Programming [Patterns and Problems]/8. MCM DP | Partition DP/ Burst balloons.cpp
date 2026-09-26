//https://takeuforward.org/practice/dsa/burst-balloons

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int maxCoins(vector<int> &nums) {
        
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
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.maxCoins(nums);

    return 0;
}