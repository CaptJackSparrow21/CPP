//https://takeuforward.org/plus/dsa/problems/find-median-from-data-stream?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class MedianFinder {
public:
    priority_queue<int> leftMax;
    priority_queue<int, vector<int>, greater<int>> rightMin;

    MedianFinder() {}

    void addNum(int num) {
        leftMax.push(num);

        rightMin.push(leftMax.top());
        leftMax.pop();

        if(rightMin.size() > leftMax.size()) {
            leftMax.push(rightMin.top());
            rightMin.pop();
        }
    }

    double findMedian() {
        if(leftMax.size() == rightMin.size()) {
            return (leftMax.top() + rightMin.top()) / 2.0;
        }

        return leftMax.top();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    vector<string> ops;
    vector<vector<int>> vals;

    int i=1;
    while(i < s.size()) {
        string func = "";
        while(i < s.size() && s[i] != '(') {
            func += s[i];
            i++;
        }
        ops.push_back(func);
        i++;

        vector<int> v;
        if(s[i] != ')') {
            int num = 0;
            while(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            v.push_back(num);
        }
        vals.push_back(v);

        while(i < s.size() && s[i] != ',' && s[i] != ']')
            i++;
        if(s[i] == ',')
            i++;
        else 
            break;
    }

    MedianFinder *obj = nullptr;
    cout << "[";
    for(int i=0; i<ops.size(); i++) {
        if(i > 0)
            cout << ",";
        
        if(ops[i] == "MedianFinder") {
            obj = new MedianFinder();
            cout << "null";
        }
        else if(ops[i] == "addNum") {
            obj->addNum(vals[i][0]);
            cout << "null";
        }
        else {
            double ans = obj->findMedian();

            if(ans == (int)ans)
                cout << (int)ans;
            else 
                cout << ans;
        }
    }
    cout << "]";

    return 0;
}