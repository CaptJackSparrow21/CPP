#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
    ListNode(int x, ListNode *next, ListNode *prev) :
                    val(x), next(next), prev(prev) {}
    ~ListNode() {
        delete next;
    }
};

class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode *head, int target) {
        vector<vector<int>> ans;
        if(!head) return ans;

        ListNode *left = head, *right = head;
        while(right->next) right = right ->next;

        while(left && right && left != right && left->prev != right) {
            int sum = left->val + right->val;
            if(sum == target) {
                ans.push_back({left->val, right->val});
                left = left->next;
                right = right->prev;
            }
            else if(sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    int target; cin >> target;

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string temp;
    vector<int> nums;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    ListNode *head = nullptr, *tail = nullptr;
    for(int val : nums) {
        ListNode *node = new ListNode(val);
        if(!head) {
            head = tail = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.findPairsWithGivenSum(head, target);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << ((j == ans[0].size()-1) ? "" : ",");
            }
        cout << "]";
        cout << ((i == ans.size()-1) ? "" : ",");
    }
    cout << "]";
    
    return 0;
}