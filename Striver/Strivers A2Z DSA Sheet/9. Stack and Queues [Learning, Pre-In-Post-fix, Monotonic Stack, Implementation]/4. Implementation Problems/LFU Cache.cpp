//https://takeuforward.org/plus/dsa/problems/lfu-cache?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC = O(capacity)
class LFUCache {
public:
    int cap;
    int minFreq;

    unordered_map<int, pair<int, int>> keyMap;
    unordered_map<int, list<int>> freqMap;
    unordered_map<int, list<int>::iterator> posMap;

    void updateFreq(int key) {
        int freq = keyMap[key].second;

        freqMap[freq].erase(posMap[key]);

        if(freqMap[freq].empty() && freq == minFreq)
            minFreq++;

        keyMap[key].second++;
        freq++;
        freqMap[freq].push_front(key);
        posMap[key] = freqMap[freq].begin();
    }

    LFUCache(int capacity) {
        cap = capacity;
        minFreq = 0;
    }

    int get(int key) {
        if(keyMap.find(key) == keyMap.end()) return -1;

        updateFreq(key);
        return keyMap[key].first;
    }

    void put(int key, int value) {
        if(cap <= 0) return;

        if(keyMap.find(key) != keyMap.end()) {
            keyMap[key].first = value;
            updateFreq(key);
        }
        else {
            if((int)keyMap.size() == cap) {
                int evict = freqMap[minFreq].back();
                freqMap[minFreq].pop_back();
                posMap.erase(evict);
                keyMap.erase(evict);
            }

            keyMap[key] = {value, 1};
            freqMap[1].push_front(key);
            posMap[key] = freqMap[1].begin();
            minFreq = 1;
        }
    }
};

vector<vector<int>> parse(string s) {
    vector<vector<int>> res;
    vector<int> curr;
    int num = 0;
    bool building = false;
    bool negative = false;

    for(char c : s) {
        if(c == '-') {
            negative = true;
        }
        else if(isdigit(c)) {
            num = num * 10 + (c - '0');
            building = true;
        }
        else {
            if(building) {
                curr.push_back(negative ? -num : num);
                num = 0;
                building = false;
                negative = false;
            }

            if(c == ']') {
                if(!curr.empty()) {
                    res.push_back(curr);
                    curr.clear();
                }
            }
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string opNames, s;
    getline(cin, opNames);
    getline(cin, s);

    vector<vector<int>> ops = parse(s);

    int capacity = ops[0][0];
    LFUCache cache(capacity);

    cout << "[null";
    for(int i=1; i<(int)ops.size(); i++) {
        auto &op = ops[i];

        if(op.size() == 1) {
            int ans = cache.get(op[0]);
            cout << "," << ans;
        }
        else {
            cache.put(op[0], op[1]);
            cout << ",null";
        }
    }

    cout << "]";

    return 0;
}