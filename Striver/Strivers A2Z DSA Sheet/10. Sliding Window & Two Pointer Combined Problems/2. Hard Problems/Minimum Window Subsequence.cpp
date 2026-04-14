//https://takeuforward.org/plus/dsa/problems/minimum-window-subsequence?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(nm) && SC = O(1)
class Solution {
public:
    string minWindow(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        int start = -1, minLen = INT_MAX;
        int i = 0;

        while(i < n) {
            int j = 0;
            while(i < n && j < m) {
                if(s1[i] == s2[j]) 
                    j++;
                i++;
            }
            if(j < m) break;

            int end = i - 1;
            j = m - 1;
            while(end >= 0 && j >= 0) {
                if(s1[end] == s2[j])
                    j--;
                end--;
            }
            end++;

            if(i - end < minLen) {
                minLen = i - end;
                start = end;
            }
            i = end + 1;
        }
        return start == -1 ? "" : s1.substr(start, minLen);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    Solution sol;
    cout << sol.minWindow(s1, s2);

    return 0;
}