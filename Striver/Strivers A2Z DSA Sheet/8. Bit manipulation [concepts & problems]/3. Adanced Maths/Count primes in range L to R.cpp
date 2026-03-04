//https://takeuforward.org/plus/dsa/problems/count-primes-in-range-l-to-r?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(N log log N + Q) && SC = O(N + Q)
//N -> maxR && Q -> # of queries
class Solution {
public:
    vector<int> primesInRange(vector<vector<int>> &queries) {
        int maxR = 0;
        
        for(auto &q : queries)
            maxR = max(maxR, q[1]);

        vector<bool> prime(maxR + 1, true);
        prime[0] = prime[1] = false;

        for(int i=2; i*i<=maxR; i++) {
            if(prime[i]) {
                for(int j=i*i;j<=maxR; j+=i)
                    prime[j] = false;
            }
        }

        vector<int> prefix(maxR+1);

        for(int i=1; i<=maxR; i++) 
            prefix[i] = prefix[i-1] + prime[i];

        vector<int> ans;

        for(auto &q : queries) {
            int L = q[0];
            int R = q[1];

            ans.push_back(prefix[R] - (L>1 ? prefix[L-1] : 0));
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> queries;
    int L, R;
    while(cin >> L >> R) 
        queries.push_back({L, R});

    Solution sol;
    vector<int> ans = sol.primesInRange(queries);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}