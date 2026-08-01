//https://takeuforward.org/plus/dsa/problems/minimum-multiplications-to-reach-end?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int minimumMulitplications(vector<int> &arr, int start, int end) {
        const int mod = 1e5;
    }
}

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
    cout << sol.minimumMulitplications(arr, start, end);

    return 0;
}