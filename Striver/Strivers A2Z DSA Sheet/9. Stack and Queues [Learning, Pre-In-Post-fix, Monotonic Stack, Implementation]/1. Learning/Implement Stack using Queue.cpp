//https://takeuforward.org/plus/dsa/problems/implement-stack-using-queue?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class QueueStack {
public:
    QueueStack() {
        
    }

    void push(int x) {

    }

    int pop() {

    }

    int top() {

    }

    bool isEmpty() {

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

    QueueStack st;

    int p = 0;

    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i) cout << ",";
        if(ops[i] == "ArrayStack") cout << "null";
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