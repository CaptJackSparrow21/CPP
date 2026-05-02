//https://takeuforward.org/plus/dsa/problems/kth-largest-element-in-a-stream-of-running-integers?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(log k) && SC = O(k)
class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int> &nums) {
        this->k = k;

        for(int x : nums) {
            pq.push(x);
            if(pq.size() > k)
                pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);

        if(pq.size() > k)
            pq.pop();

        return pq.top();    
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int n; 
    cin >> n;

    vector<int> nums(n);
    for(int &i : nums) cin >> i;

    cout << "[";
    KthLargest obj(k, nums);
    cout << "null";

    int m; cin >> m;

    for(int i=0; i<m; i++) {
        int val;
        cin >> val;
        cout << "," << obj.add(val);
    }
    cout << "]";

    return 0;
}