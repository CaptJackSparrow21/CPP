//https://takeuforward.org/plus/dsa/problems/replace-elements-by-their-rank?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    vector<int> replaceWithRank(vector<int> &arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rankMap;
        int rank = 1;
        for(int x : sorted)
            if(rankMap.find(x) == rankMap.end())
                rankMap[x] = rank++;

        for(int i=0; i<arr.size(); i++)
            arr[i] = rankMap[arr[i]];

        return arr;
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
    vector<int> arr;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            arr.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.replaceWithRank(arr);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1 == ans.size()) ? "" : ",");
    }
    cout << "]";

    return 0;
}