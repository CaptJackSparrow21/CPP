//https://takeuforward.org/plus/dsa/problems/candy?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(n)
class Solution {
public:
    int candy(vector<int> &ratings) {
        int n = ratings.size();

        vector<int> candies(n, 1);

        for(int i=1; i<n; i++) {
            if(ratings[i] > ratings[i-1])
                candies[i] = candies[i-1] + 1;
        }

        for(int i=n-2; i>=0; i--) {
            if(ratings[i] > ratings[i+1]) 
                candies[i] = max(candies[i], candies[i+1] + 1);
        }

        int total = 0;
        for(int x : candies)
            total += x;

        return total;

    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> ratings;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            ratings.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.candy(ratings);

    return 0;
}