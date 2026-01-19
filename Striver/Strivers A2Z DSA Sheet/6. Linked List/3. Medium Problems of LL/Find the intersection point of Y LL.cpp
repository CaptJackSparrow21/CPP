#include<bits/stdc++.h>
using namespace std;

/* Input format is like
    IntersecVal : 4
    Nums1 : [1, 2, 3, 4, 5]
    Nums2 : [7, 8, 4, 5]
    SkipA : 3
    SkipB : 2
*/

struct ListNode{

    int val;
    ListNode *next;
    ListNode() {
        val = 0;
        next = NULL;
    }

    ListNode(int data1) {
        val = data1;
        next = NULL;
    }

    ListNode(int data1, ListNode *next1) {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;

        ListNode *walkA = headA;
        ListNode *walkB = headB;

        while(walkA != walkB) {
            walkA = walkA ? walkA->next : headB;
            walkB = walkB ? walkB->next : headA; 
        }

        return walkA;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int interSectVal; cin >> interSectVal; 
    cin.ignore();

    string input1;
    string input2;
    getline(cin, input1);
    getline(cin, input2);

    int skipA, skipB;
    cin >> skipA;
    cin >> skipB;

    auto parseArrayLine = [] (string s) -> vector<int> {
        s.erase(remove(s.begin(), s.end(), '['), s.end()); 
        s.erase(remove(s.begin(), s.end(), ']'), s.end());

        stringstream ss(s);
        string temp;
        vector<int> nums;
        while(getline(ss, temp, ',')) {
            if(!temp.empty()) {
               nums.push_back(stoi(temp));
            }
        }
        return nums;
    };

    vector<int> nums1 = parseArrayLine(input1);
    vector<int> nums2 = parseArrayLine(input2);

    auto build = [](const vector<int> &nums) -> ListNode * {
        ListNode *head = NULL, *tail = NULL;
        for(int val : nums) {
            ListNode *node = new ListNode(val);
            if(!head) {
                head = tail = node;
            }
            else {
                tail->next = node;
                tail = node;
            }
        }
        return head;
    };

    ListNode *headA = build(nums1);
    ListNode *headB = build(nums2);

    if(interSectVal != -1) {
        ListNode *interSectNode = headA;
        for(int i=0; i<skipA && interSectNode; i++) {
            interSectNode = interSectNode->next;
        }

        ListNode *currB = headB;
        for(int i=0; i<skipB && currB; i++) {
            currB = currB->next;
        }

        if(currB) currB->next = interSectNode;
    }

    Solution sol;
    ListNode *res = sol.getIntersectionNode(headA, headB);

    if(res) cout << res->val << endl;
    else cout << "null\n"; 

    return 0;
}