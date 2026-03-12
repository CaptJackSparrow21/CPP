//https://takeuforward.org/plus/dsa/problems/implement-min-stack?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC = O(n)
class MinStack {
public:
    stack<int> st;
    stack<int> minSt;

    MinStack() {

    }

    void push(int value) {
        st.push(value);

        if(minSt.empty() || value <= minSt.top()) {
            minSt.push(value);
        }
    }

    void pop() {
        if(st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {  
        return minSt.top();
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

    MinStack st;
    int p = 0;

    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i) cout << ",";
        if(ops[i] == "MinStack") cout << "null";
        else if(ops[i] == "push") {
            st.push(args[p++]);
            cout << "null";
        }

        else if(ops[i] == "pop") {
            st.pop();
            cout << "null";
        }
        else if(ops[i] == "top") cout << st.top();
        else if(ops[i] == "getMin") cout << st.getMin();
    }
    cout << "]";

    return 0;
}