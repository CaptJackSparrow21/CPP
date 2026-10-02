//https://takeuforward.org/practice/dsa/longest-word-with-all-prefixes

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(N * L)
//N -> # words && L -> max. word length
class Solution {
public:
    struct Node {
        Node *child[26]{};
        bool end = false;
    };

    Node *root = new Node();

    void insert(string &s) {
        Node *curr = root;
        for(char c : s) {
            int i = c - 'a';
            if(!curr->child[i])
                curr->child[i] = new Node();
            curr = curr->child[i];
        }
        curr->end = true;
    }

    bool complete(string &s) {
        Node *curr = root;
        for(char c : s) {
            int i = c - 'a';
            if(!curr->child[i])
                return false;
            curr = curr->child[i];

            if(!curr->end)
                return false;
        }
        return true;
    }

    string completeString (vector<string> &nums) {
        for(string &s : nums)
            insert(s);

        string ans;

        for(string &s : nums) {
            if(complete(s)) {
                if(s.length() > ans.length() ||
                  (s.length() == ans.length() && s < ans)) {
                        ans = s;
                }
            }
        }
        return ans.empty() ? "None" : ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<string> nums;
    string temp;
    for(char c : s) {
        if(isalnum(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(temp);
            temp = "";
        }
    }

    Solution sol;
    cout << sol.completeString(nums);

    return 0;
}