//https://takeuforward.org/plus/dsa/problems/asteroid-collision?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC = SC = O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        stack<int> st;
        for(int x : asteroids) {
            bool destroyed = false;

            while(!st.empty() && st.top() > 0 && x < 0) {
                if(abs(st.top()) < abs(x)) {
                    st.pop();
                    continue;
                }
                else if(abs(st.top()) == abs(x)) {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed)
                st.push(x);
        }
        vector<int> ans(st.size());
        
        for(int i=st.size() - 1; i>=0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
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
    vector<int> asteroids;
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty())
            asteroids.push_back(stoi(temp));
    }

    Solution sol;
    vector<int> ans = sol.asteroidCollision(asteroids);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}