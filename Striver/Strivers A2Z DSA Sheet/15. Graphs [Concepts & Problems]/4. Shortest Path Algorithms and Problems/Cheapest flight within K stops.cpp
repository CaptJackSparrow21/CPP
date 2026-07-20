//https://takeuforward.org/plus/dsa/problems/cheapest-flight-within-k-stops?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int CheapestFlight(int n, vector<vector<int>> &flights, 
                        int src, int dst, int K) {
                        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, K, src, dist;
    cin >> n;
    cin.ignore();
    string s; cin >> s;
    cin >> src;
    cin >> dst;
    cin >> K;
    
    vector<vector<int>> flights;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                flights.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.CheapestFlight(n, flights, src, dist, K);

    return 0;
}