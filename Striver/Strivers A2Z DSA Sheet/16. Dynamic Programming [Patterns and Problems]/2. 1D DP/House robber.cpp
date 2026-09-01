//https://takeuforward.org/plus/dsa/problems/house-robber?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int rob(vector<int> &money, int l, int r) {
        int prev1 = 0, prev2 = 0;

        for(int i=l; i<=r; i++) {
            int curr = max(prev1, prev2 + money[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int houseRobber(vector<int> &money) {
        int n = money.size();
        if(n == 1)
            return money[0];

        return max(rob(money, 0, n-2), rob(money, 1, n-1));
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

    stringstream ss(s);
    vector<int> money;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            money.push_back(stoll(temp));
    }

    Solution sol;
    cout << sol.houseRobber(money);

    return 0;
}