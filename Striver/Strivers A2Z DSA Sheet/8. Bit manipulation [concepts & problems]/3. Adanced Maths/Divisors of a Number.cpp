//https://takeuforward.org/plus/dsa/problems/divisors-of-a-number?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(sqrt(n)) && SC = O(d) : d -> # of divisors
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;
        for(int i=1; i*i <= n; i++) {
            if(n % i == 0) {
                ans.push_back(i);

                if(i != n/i)
                    ans.push_back(n/i);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    Solution sol;

    vector<int> ans = sol.divisors(n);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";
    return 0;
}