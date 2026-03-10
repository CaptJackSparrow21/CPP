//https://takeuforward.org/plus/dsa/problems/implement-queue-using-linkedlist?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC == O(n)
class LinkedListQueue {
public:
    struct Node {
        int data;
        Node *next;

        Node(int x) {
            data = x;
            next = nullptr;
        }
    };

    Node *front;
    Node *rear;

    LinkedListQueue() {
        front = rear = nullptr;
    }

    void push(int x) {
        Node *temp = new Node(x);

        if(rear == nullptr) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    int pop() { 
        if(front == nullptr) return -1;

        Node *temp = front;
        int val = temp->data;

        front = front->next;

        if(front == nullptr) rear = nullptr;
        delete temp;
        return val;
    }

    int peek() {
        if(front == nullptr) return -1;
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
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
        if(c == '[' || c == ']' || c == '"' || c == ',') c = ' ';

    stringstream ss2(s);
    vector<int> args;
    int num;
    while(ss2 >> num) args.push_back(num);

    LinkedListQueue que;
    int p = 0;

    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i) cout << ",";
        if(ops[i] == "LinkedListQueue") cout << "null";
        else if(ops[i] == "push") {
            que.push(args[p++]);
            cout << "null";
        }
        else if(ops[i] == "pop") cout << que.pop();
        else if(ops[i] == "peek") cout << que.peek();
        else if(ops[i] == "isEmpty") 
            cout << (que.isEmpty() ? "true" : "false");
    }
    cout << "]";

    return 0;
}