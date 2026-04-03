/*
 * @lc app=leetcode id=460 lang=cpp
 *
 * [460] LFU Cache
 */

// @lc code=start
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

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

