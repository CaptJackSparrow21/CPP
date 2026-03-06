//https://takeuforward.org/plus/dsa/problems/implement-queue-using-arrays?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class ArrayQueue {
public:
    int arr[1000];
    int front, rear;

    ArrayQueue() {
        front = 0;
        rear = -1;
    }

    void push(int x) {
        rear++;
        arr[rear] = x;
    }

    int pop() {
        int val = arr[front];
        front++;
        return val;
    }

    int peek() { 
        return arr[front];
    }

    bool isEmpty() {
        return front > rear;
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

    ArrayQueue que;

    int p = 0;

    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i) cout << ",";
        if(ops[i] == "ArrayQueue") cout << "null";
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