#include<bits/stdc++.h>
using namespace std;

//custom code
class ListNode {
public :
    int data;
    ListNode* prev;
    ListNode* next;
    ListNode() : data(0), prev(nullptr), next(nullptr) {}
    ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
    ListNode(int x, ListNode* prev, ListNode* next) :
            data(x), prev(prev), next(next) {}
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