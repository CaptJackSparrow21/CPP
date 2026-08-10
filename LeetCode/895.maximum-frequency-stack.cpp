/*
 * @lc app=leetcode id=895 lang=cpp
 *
 * [895] Maximum Frequency Stack
 */

// @lc code=start
class FreqStack {
public:
    unordered_map<int, int> freq;
    vector<vector<int>> group; 
    int maxfreq = 0;

    FreqStack() {
        group.resize(20001);
    }
    
    void push(int val) {    
        freq[val]++;
        int f = freq[val];
        maxfreq = max(maxfreq, f);
        group[f].push_back(val);
    }
    
    int pop() {
        int val = group[maxfreq].back();
        group[maxfreq].pop_back();
        freq[val]--;
        if(group[maxfreq].empty())
            maxfreq--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
// @lc code=end

