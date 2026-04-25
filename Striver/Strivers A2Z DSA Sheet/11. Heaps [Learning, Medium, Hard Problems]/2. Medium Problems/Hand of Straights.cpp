//https://takeuforward.org/plus/dsa/problems/hand-of-straights?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) && SC = O(n)
class Solution {
public:
    bool isNStraightHand(vector<int> &hand, int groupSize) {
        if(hand.size() % groupSize != 0)
            return false;

        map<int, int> freq;
        for(int card : hand)
            freq[card]++;

        while(!freq.empty()) {
            int start = freq.begin()->first;
            for(int i=0; i<groupSize; i++) {
                if(freq[start + i] == 0)
                    return false;

                freq[start + i]--;
                if(freq[start + i] == 0)
                    freq.erase(start + i);
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int groupSize; cin >> groupSize;

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> hand;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            hand.push_back(stoi(temp));
    }

    Solution sol;
    cout << boolalpha << sol.isNStraightHand(hand, groupSize);

    return 0;
}