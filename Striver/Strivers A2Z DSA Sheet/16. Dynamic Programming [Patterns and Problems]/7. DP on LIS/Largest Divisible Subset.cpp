//https://takeuforward.org/practice/dsa/largest-divisible-subset

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> largestDivisible(vector<int> nums) {

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
    vector<int> ans = sol.largestDivisibleSubset

    return 0;
}