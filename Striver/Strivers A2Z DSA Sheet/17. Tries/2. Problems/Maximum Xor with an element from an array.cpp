//https://takeuforward.org/practice/dsa/maximum-xor-with-an-element-from-an-array

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    struct Node {
        Node *child[2]{};
    };

    void insert(Node *root, int x) {
        Node *curr = root;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            if(!curr->child[bit])
                curr = curr->child[bit];
            curr = curr->child[bit];
        }
    }

    int getmaxXor(Node *root, int x) {
        Node *curr = root;
        int ans = 0;
        for(int b=31; b>=0; b--) {
            int bit = (x >> b) & 1;
            int opposite = bit ^ 1;
            if(curr->child[opposite]) {
                ans |= (1 << b);
                curr = curr->child[opposite];
            }
            else 
                curr = curr->child[bit];
        }
        return ans;
    }

    vector<int> maximizeXor(vector<int> &nums, 
                vector<vector<int>> &queries) {
        sort(nums.begin(), nums.end());
        vector<array<int, 3>> q;
        for(int i=0; i<queries.size(); i++)
            q.push_back({queries[i][1], queries[i][0], i});
        
        sort(q.begin(), q.end());
        vector<int> ans(queries.size(), -1);

        Node *root = new Node();
        int j = 0;
        for(auto [m, x, idx] : q) {
            while(j < nums.size() && nums[j] <= m) {
                insert(root, nums[j]);
                j++;
            }

            if(j > 0)
                ans[idx] = getmaxXor(root, x);
        }
        return ans;
    }
};


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    getline(cin, s);
    getline(cin, t);

    vector<vector<int>> queries;
    vector<int> nums, row;
    string temp;
    for(char c : s) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    temp = "";

    for(char c : t) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                queries.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.maximizeXor(nums, queries);
    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << nums[i];
        if(i + 1 < ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}