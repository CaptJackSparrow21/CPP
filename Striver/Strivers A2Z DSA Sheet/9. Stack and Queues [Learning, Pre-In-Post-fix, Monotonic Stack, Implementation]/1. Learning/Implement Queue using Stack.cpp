//https://takeuforward.org/plus/dsa/problems/implement-queue-using-stack?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class StackQueue{
public:
    stack<int> s1, s2;

    StackQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool isEmpty(){
        return s1.empty() && s2.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for(char &c : s)
        if(c == '"' || c == '[' || c == ']' || c == ',') c = ' ';
    
    vector<string> ops;
    stringstream ss(s);
    string x;
    while(ss >> x) ops.push_back(x);

    getline(cin, s);

    for(char &c : s)
        if(c == '"' || c == '[' || c == ']' || c == ',') c = ' ';
    
    stringstream ss2(s);
    vector<int> args;
    int num;
    while(ss2 >> num) args.push_back(num);

    StackQueue que;
    int p = 0;

    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i) cout << ",";
        if(ops[i] == "StackQueue") cout << "null";
        else if(ops[i] == "push") {
            que.push(args[p++]);
            cout << "null";
        }

        else if(ops[i] == "pop") cout << que.pop();
        else if(ops[i] == "peek") cout << que.peek();
        else if(ops[i] == "isEmpty") {
            cout << (que.isEmpty() ? "true" : "false");
        }
    }
    cout << "]";
    return 0;
}