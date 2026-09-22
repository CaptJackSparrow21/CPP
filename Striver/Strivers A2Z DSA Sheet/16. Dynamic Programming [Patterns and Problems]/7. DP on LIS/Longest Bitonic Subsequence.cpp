//https://takeuforward.org/practice/dsa/longest-bitonic-subsequence

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int LongestBitonicSequence(vector<int> arr) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> arr;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            arr.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.LongestBitonicSequence(arr);

    return 0;
}