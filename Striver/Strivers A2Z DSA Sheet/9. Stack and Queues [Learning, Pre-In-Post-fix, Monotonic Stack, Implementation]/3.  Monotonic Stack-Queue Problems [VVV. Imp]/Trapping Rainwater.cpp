//https://takeuforward.org/plus/dsa/problems/trapping-rainwater?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int trap(vector<int> &height) {
        int n = height.size();
        int left = 0, right = n-1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while(left <= right) {
            if(height[left] < height[right]) {
                if(height[left] >= leftMax)
                    leftMax = height[left];
                else
                    water += leftMax - height[left];
                left++; 
            }
            else {
                if(height[right] >= rightMax) 
                    rightMax = height[right];
                else 
                    water += rightMax - height[right];
                right--; 
            }
        }
        return water;
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
    vector<int> height;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            height.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.trap(height);

    return 0;
}