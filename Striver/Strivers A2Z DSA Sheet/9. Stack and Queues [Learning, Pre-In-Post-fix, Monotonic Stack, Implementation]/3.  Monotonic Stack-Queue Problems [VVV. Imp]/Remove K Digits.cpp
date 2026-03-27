//https://takeuforward.org/plus/dsa/problems/remove-k-digits?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    string removeKdigits(string nums, int k) {
        string st = "";
        for(char c : nums) {
            while(!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        
        while(k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        int i=0; 
        while(i < st.size() && st[i] == '0') i++;

        string ans = st.substr(i);

        return ans.empty() ? "0" : ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string nums; cin >> nums;
    int k; cin >> k;

    Solution sol;
    cout << sol.removeKdigits(nums, k);

    return 0;
}