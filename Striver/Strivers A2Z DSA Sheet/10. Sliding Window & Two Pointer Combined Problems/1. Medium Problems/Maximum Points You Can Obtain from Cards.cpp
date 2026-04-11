//https://takeuforward.org/plus/dsa/problems/maximum-points-you-can-obtain-from-cards-?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int maxScore(vector<int> &cardScore, int k) {
        int n = cardScore.size();
        int windowSize = n - k;

        int total = 0;
        for(int i=0; i<n; i++)
            total += cardScore[i];

        if(windowSize == 0) return total;

        int windowSum = 0;
        for(int i=0; i<windowSize; i++)
            windowSum += cardScore[i];

        int minWindow = windowSum;

        for(int r=windowSize; r<n; r++){
            windowSum += cardScore[r];
            windowSum -= cardScore[r - windowSize];
            minWindow = min(minWindow, windowSum);
        }
        return total - minWindow;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int k; cin >> k;
    
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> cardScore;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            cardScore.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.maxScore(cardScore, k);

    return 0;
}