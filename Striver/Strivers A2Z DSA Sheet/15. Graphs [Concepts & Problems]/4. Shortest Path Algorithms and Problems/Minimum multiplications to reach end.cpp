//https://takeuforward.org/plus/dsa/problems/minimum-multiplications-to-reach-end?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(1e5 * arr.size())
//SC = O(1e5)
class Solution {
public:
    int minimumMultiplications(vector<int> &arr, int start, int end) {
        const int mod = 1e5;
        vector<int> dist(mod, INT_MAX);
        queue<pair<int, int>> q;

        dist[start] = 0;
        q.push({start, 0});

        while(!q.empty()) {
            auto [node, steps] = q.front();
            q.pop();

            for(int x : arr) {
                int nxt = (node * x) % mod;
                if(steps + 1 < dist[nxt]) {
                    dist[nxt] = steps + 1;

                    if(nxt == end)
                        return steps + 1;

                    q.push({nxt, steps + 1});
                }
            }
        }
        return -1;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int start, end;
    cin >> start;
    cin >> end;

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            arr.push_back(stoi(temp));
        }
    }
    
    Solution sol;
    cout << sol.minimumMultiplications(arr, start, end);

    return 0;
}