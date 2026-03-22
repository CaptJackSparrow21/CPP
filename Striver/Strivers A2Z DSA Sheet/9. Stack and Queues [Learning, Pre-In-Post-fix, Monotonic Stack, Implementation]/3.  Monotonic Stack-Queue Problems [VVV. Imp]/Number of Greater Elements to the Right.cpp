//https://takeuforward.org/plus/dsa/problems/number-of-greater-elements-to-the-right?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//https://www.youtube.com/watch?v=9uaXG62Y8Uw (fenwik tree)
//TC = O(n log n) && SC = O(n)
class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        int n = arr.size();

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> rank;

        for(int i=0; i<n; i++)
            rank[temp[i]] = i+1;

        vector<int> bit(n+1, 0);

        //Mark that number exists
        auto update = [&] (int i) {
            while(i <= n) {
                bit[i] += 1;
                i += i & -i;
            }
        };

        //count of numbers ≤ i
        auto query = [&] (int i) {
            int sum = 0;
            while(i > 0) {
                sum += bit[i];
                i -= i & -i;
            }
            return sum;
        };

        vector<int> nge(n);

        for(int i=n-1; i>=0; i--) {
            int r = rank[arr[i]];

            nge[i] = query(n) - query(r);
            update(r);
        }

        vector<int> ans;
        for(int idx : indices) {
            ans.push_back(nge[idx]);
        }

        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line, line2;
    getline(cin, line);
    getline(cin, line2);

    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    line2.erase(remove(line2.begin(), line2.end(), '['), line2.end());
    line2.erase(remove(line2.begin(), line2.end(), ']'), line2.end());

    stringstream ss(line);
    vector<int> arr;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            arr.push_back(stoi(temp));
    } 

    stringstream ss2(line2);
    vector<int> indices;
    string temp2;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            indices.push_back(stoi(temp2));
    }

    Solution sol;
    vector<int> ans = sol.count_NGE(arr, indices);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}