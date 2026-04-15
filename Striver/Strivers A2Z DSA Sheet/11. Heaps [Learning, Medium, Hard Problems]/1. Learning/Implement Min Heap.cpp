//https://takeuforward.org/plus/dsa/problems/implement-min-heap?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(Q * log n) && SC = O(n) 
//Q -> # operations
class Solution {
public:
    vector<int> heap;

    void initializeHeap() { 
        heap.clear();
    }

    void heapifyUp(int i) {
        while(i > 0) {
            int parent = (i - 1) / 2;
            if(heap[parent] > heap[i]) {
                swap(heap[parent], heap[i]);
                i = parent;
            }
            else break;
        }
    }

    void heapifyDown(int i) {
        int n = heap.size();
        while(true) {
            int smallest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            if(left < n && heap[left] < heap[smallest])
                smallest = left;
            if(right < n && heap[right] < heap[smallest])
                smallest = right;
            if(smallest != i) {
                swap(heap[i], heap[smallest]);
                i = smallest;
            }
            else break;
        }
    }

    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size()-1);
    }

    void changeKey(int index, int new_val) {
        heap[index] = new_val;
        heapifyUp(index);
        heapifyDown(index);
    }

    void extractMin() {    
        if(heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        if(!heap.empty()) 
            heapifyDown(0);
    }

    bool isEmpty() {
        return heap.empty();
    }

    int getMin() {  
        return heap[0];
    }

    int heapSize() {
        return heap.size();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    cin >> line;

    vector<string> ops;
    stringstream ss(line);
    string token;
    while(getline(ss, token, ',')) {
        string op = "";
        for(char c : token)
            if(c != '[' && c != ']' && c != '"')
                op += c;
        if(!op.empty())
            ops.push_back(op);
    }

    string numLine;
    cin >> numLine;

    vector<vector<int>> args;
    int i=0, n = numLine.size();
    while(i < n) {
        if(numLine[i] == '[' && i+1 < n && numLine[i+1] != '[]') {
            vector<int> group;
            i++;
            while(i < n && numLine[i] != ']') {
                if(isdigit(numLine[i]) || numLine[i] == '-') {
                    int num = 0, sign = 1;
                    if(numLine[i] == '-') {
                        sign = -1;
                        i++;
                    }
                    while(i < n && isdigit(numLine[i]))
                        num = num * 10 + (numLine[i++] - '0');
                    group.push_back(sign * num);
                }
                else 
                    i++;
            }
            args.push_back(group);
        }
        i++;
    }

    Solution sol;

    int argIdx = 0;
    vector<string> output;

    for(auto &op : ops) {
        if(op == "initializeheap") {
            sol.initializeHeap();
            output.push_back("null");
        }
        else if(op == "insert") {
            sol.insert(args[argIdx][0]);
            argIdx++;
            output.push_back("null");
        }
        else if(op == "getMin") {
            output.push_back(to_string(sol.getMin()));
        }
        else if(op == "heapSize") {
            output.push_back(to_string(sol.heapSize()));
        }
        else if(op == "isEmpty") {
            output.push_back(to_string(sol.isEmpty()));
        }
        else if(op == "extractMin") {
            sol.extractMin();
            output.push_back("null");
        }
        else if(op == "changeKey") {
            sol.changeKey(args[argIdx][0], args[argIdx][1]);
            argIdx++;
            output.push_back("null");
        }
    }

    cout << "[";
    for(int i=0; i<output.size(); i++) {
        cout << output[i];
        if(i + 1 < output.size())
            cout << ",";
    }
    cout << "]";

    return 0;
}