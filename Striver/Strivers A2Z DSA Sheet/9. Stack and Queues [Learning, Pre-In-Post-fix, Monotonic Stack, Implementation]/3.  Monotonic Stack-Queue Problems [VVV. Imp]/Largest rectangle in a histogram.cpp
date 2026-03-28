//https://takeuforward.org/plus/dsa/problems/largest-rectangle-in-a-histogram?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        for(int i=0; i<=n; i++) {
            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > currHeight) {
                int height = heights[st.top()];
                st.pop();

                int right = i;
                int left = st.empty() ? -1 : st.top();

                int width = right - left - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
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
    string temp;
    vector<int> heights;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            heights.push_back(stoi(temp));
    }

    Solution sol;
    cout << sol.largestRectangleArea(heights);

    return 0;
}