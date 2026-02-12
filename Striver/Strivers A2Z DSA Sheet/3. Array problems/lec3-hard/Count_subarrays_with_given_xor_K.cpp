#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        unordered_map<int, int> freq;   //each "xor_sum seen so far ,
        int count = 0, xor_sum = 0;     //how many times we seen it.
        for(int x : nums) {
            xor_sum ^= x;
            if(xor_sum == k) count++;
            if(freq.find(xor_sum ^ k) != freq.end())
                count += freq[xor_sum ^ k];

            freq[xor_sum]++;
        }
        return count;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<int> nums;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    int k; cin >> k;

    Solution s;
    cout << s.subarraysWithXorK(nums, k) << endl;
    return 0;
}