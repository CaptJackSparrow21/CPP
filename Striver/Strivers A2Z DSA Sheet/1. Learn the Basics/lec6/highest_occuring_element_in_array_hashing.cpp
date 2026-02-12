#include<bits/stdc++.h>
using namespace std;

class Solution {
    public : 
        int mostFrequentElement(vector<int> &nums) {
            unordered_map<int, int> freq;
            for(int i : nums) {
                freq[i]++;
            }

            int max_freq = 0, ans = INT_MAX;
            for(auto &p : freq) {
                int element = p.first;
                int count = p.second;
                if(count > max_freq || (count == max_freq && element < ans)) {
                    max_freq = count ;
                    ans = element;
                }
            }
            return ans;
        }
};

int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<int> nums;

        int n;
        while(ss >> n) nums.push_back(n);

        if(nums.empty()) {
            cout << "Wrong input.";
            return 0;
        }

        Solution s;
        cout << "Answer is : " <<s.mostFrequentElement(nums) << endl;
        return 0;
}