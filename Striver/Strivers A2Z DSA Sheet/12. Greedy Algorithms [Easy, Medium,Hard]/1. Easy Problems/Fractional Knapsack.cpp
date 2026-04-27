//https://takeuforward.org/plus/dsa/problems/fractional-knapsack?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

//TC = O(n log n) && SC = O(n)
#define ll long long
class Solution {
public:
    double fractionalKnapsack(vector<ll> &val, vector<ll> &wt, 
                                                ll capacity) {
        int n = val.size();
        vector<pair<double, int>> ratio(n);
        for(int i=0; i<n; i++)
            ratio[i] = {(double) val[i] / wt[i], i};
        sort(ratio.rbegin(), ratio.rend());
        double ans = 0.0;
        for(auto &[r, i] : ratio) {
            if(wt[i] <= capacity) {
                ans += val[i];
                capacity -= wt[i];
            }
            else {
                ans += r * capacity;
                break;
            }
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    ll capacity; cin >> capacity;

    s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());

    s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
    s2.erase(remove(s2.begin(), s2.end(), ']'), s2.end());

    stringstream ss1(s1);
    string temp1;
    vector<ll> val;
    while(getline(ss1, temp1, ',')) {
        val.push_back(stoi(temp1));
    }

    stringstream ss2(s2);
    string temp2;
    vector<ll> wt;
    while(getline(ss2, temp2, ',')) {
        wt.push_back(stoi(temp2));
    }

    Solution sol;
    double ans = sol.fractionalKnapsack(val, wt, capacity);

    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}