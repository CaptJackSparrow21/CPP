//https://takeuforward.org/plus/dsa/problems/minimum-cost-to-connect-sticks?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    int connectSticks(vector<int> &sticks) {
        priority_queue<int, vector<int>, greater<int>>
                                pq(sticks.begin(), sticks.end());
        
        int cost = 0;
        while(pq.size() > 1) {
            int first = pq.top(); 
            pq.pop();
            int second = pq.top();
            pq.pop();

            int sum = first + second;
            cost += sum;

            pq.push(sum);
        }
        return cost;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<int> sticks;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            sticks.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.connectSticks(sticks);

    return 0;
}