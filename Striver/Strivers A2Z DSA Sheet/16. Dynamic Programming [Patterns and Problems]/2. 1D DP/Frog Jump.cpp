//https://takeuforward.org/plus/dsa/problems/frog-jump?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int frogJump(vector<int> &heights) {
        int n = heights.size();

        int prev2 = 0;
        int prev1 = 0;

        for(int i=1; i<n; i++) {
            int one = prev1 + abs(heights[i] - heights[i-1]);
            int two = INT_MAX;

            if(i > 1)
                two = prev2 + abs(heights[i] - heights[i-2]);

            int curr = min(one, two);

            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    vector<int> heights;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            heights.push_back(stoll(temp));
    }

    Solution sol;
    cout << sol.frogJump(heights);


    return 0;
}