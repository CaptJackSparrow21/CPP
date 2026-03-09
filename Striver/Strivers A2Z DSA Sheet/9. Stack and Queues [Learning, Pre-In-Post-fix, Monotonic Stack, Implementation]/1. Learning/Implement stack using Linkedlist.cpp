//https://takeuforward.org/plus/dsa/problems/implement-stack-using-linkedlist?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC = O(n)
class LinkedListStack {
public:
    struct Node {
        int data;
        Node *next;
        Node(int x) {
            data = x;
            next = nullptr;
        }
    };
    Node *topNode;

    LinkedListStack() {
        topNode = nullptr;
    }

    void push(int x) {
        Node *newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }

    int pop() {
        if(topNode == nullptr) return -1;

        int val = topNode->data;
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;

        return val;
    }

    int top() {
        if(topNode == nullptr) return -1;
        return topNode->data;
    }

    bool isEmpty() {    
        return topNode == nullptr;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for(char &c : s)
        if(c == '"' || c == '[' || c == ']' || c == ',') c = ' ';

    stringstream ss(s);
    vector<string> ops;
    string x;

    while(ss >> x) ops.push_back(x);

    getline(cin, s);

    for(char &c : s)
        if(c == '"' || c == '[' || c == ']' || c == ',') c = ' ';

    stringstream ss2(s);
    vector<int> args;
    int num;

    while(ss2 >> num) args.push_back(num);

    LinkedListStack st;
    int p = 0;
    
    cout << "[";
    for(int i=0; i<ops.size();  i++) {
        if(i) cout << ",";
        if(ops[i] == "LinkedListStack") cout << "null";
        else if(ops[i] == "push") {
            st.push(args[p++]);
            cout << "null";
        }

        else if(ops[i] == "pop") cout << st.pop();
        else if(ops[i] == "top") cout << st.top();
        else if(ops[i] == "isEmpty") 
            cout << (st.isEmpty() ? "true" : "false");
    }
    cout << "]";

    return 0;
}