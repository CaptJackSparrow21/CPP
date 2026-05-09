//https://takeuforward.org/plus/dsa/problems/minimum-number-of-platforms-required-for-a-railway?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n log n) & SC = O(1)
class Solution {
public:
    int findPlatform(vector<int> &Arrival, vector<int> &Departure) {
        int n = Arrival.size();

        sort(Arrival.begin(), Arrival.end());
        sort(Departure.begin(), Departure.end());

        int i=0, j=0;
        int platforms = 0, maxp = 0;

        while(i < n && j < n) {
            if(Arrival[i] <= Departure[j]) {
                platforms++;
                maxp = max(maxp, platforms);
                i++;
            }
            else {
                platforms--;
                j++;
            }
        }
        return maxp;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());

    s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
    s2.erase(remove(s2.begin(), s2.end(), ']'), s2.end());

    stringstream ss1(s1);
    vector<int> Arrival;
    string temp1;
    while(getline(ss1, temp1, ',')) {
        if(!temp1.empty())
            Arrival.push_back(stoi(temp1));
    }

    stringstream ss2(s2);
    vector<int> Departure;
    string temp2;
    while(getline(ss2, temp2, ',')) {
        if(!temp2.empty())
            Departure.push_back(stoi(temp2));
    }

    Solution sol;
    cout << sol.findPlatform(Arrival, Departure);

    return 0;
}