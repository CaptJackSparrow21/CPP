//https://takeuforward.org/plus/dsa/problems/lru-cache?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(1) && SC = O(capacity)
class LRUCache {
public:
    int cap;
    list<pair<int, int>> dll; //{key, value}
    unordered_map<int, list<pair<int, int>> :: iterator> mp;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;

        auto it = mp[key];
        int val = it->second;

        dll.erase(it);
        dll.push_front({key, val});
        mp[key] = dll.begin();

        return val;
    }

    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            dll.erase(mp[key]);
            mp.erase(key);
        }
       
        if(dll.size() == cap) {
            auto last = dll.back();
            mp.erase(last.first);
            dll.pop_back();
        }

        dll.push_front({key, value});
        mp[key] = dll.begin();
    }
};

vector<vector<int>> parse(string s) {
    vector<vector<int>> res;
    vector<int> curr;
    int num = 0;
    bool building = false;

    for(char c : s) {
        if(isdigit(c)) {
            num = num * 10 + (c - '0');
            building = true;
        }
        else {
            if(building) {
                curr.push_back(num);
                num = 0;
                building = false;   
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

    int capacity;
    cin >> capacity;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> ops = parse(s);

    LRUCache cache(capacity);
    
    bool first = true;
    cout << "[";
    for(auto &op : ops) {
        if(op[0] == 1) {
            cache.put(op[1], op[2]);
            if(!first) cout << ",";
            cout << "null";
        }
        else {
            int ans = cache.get(op[1]);
            if(!first) cout << ",";
            cout << ans;
        }
        first = false;
    }
    cout << "]";

    return 0;
}