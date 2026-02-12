#include<bits/stdc++.h>
using namespace std;

//Leetcode style
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

//custom local code
class ListNode {
public :    
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode (int x, ListNode* next) : data(x), next(next) {}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Not for running the code
    // Just for understanding the structure 

    /* In
        struct : members are public by default
        class : members are private by default
    */

    return 0;
}