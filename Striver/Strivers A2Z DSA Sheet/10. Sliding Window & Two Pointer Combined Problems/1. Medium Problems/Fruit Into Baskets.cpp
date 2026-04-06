//https://takeuforward.org/plus/dsa/problems/fruit-into-baskets?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int totalFruits(vector<int> &fruits) {
        unordered_map<int, int> mp;
        int l=0, ans = 0;
        for(int r=0; r<fruits.size(); r++) {
            mp[fruits[r]]++;

            while(mp.size() > 2) {
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
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
    vector<int> fruits;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            fruits.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.totalFruits(fruits);

    return 0;
}