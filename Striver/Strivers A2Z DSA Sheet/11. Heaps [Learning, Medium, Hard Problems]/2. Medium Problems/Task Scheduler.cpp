//https://takeuforward.org/plus/dsa/problems/task-scheduler?source=strivers-a2z-dsa-track


#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int leastInterval(vector<char> &tasks, int n) {
        int freq[26] = {};
        for(char c : tasks)
            freq[c - 'A']++;
        int maxFreq = *max_element(freq, freq+26);
        int cntMax = count(freq, freq+26, maxFreq);
        return max((int) tasks.size(), (maxFreq-1) * (n+1) + cntMax);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int n; cin >> n;
    
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    string temp;
    vector<char> tasks;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            tasks.push_back(temp[0]);
    }

    Solution sol;
    cout << sol.leastInterval(tasks, n);

    return 0;
}