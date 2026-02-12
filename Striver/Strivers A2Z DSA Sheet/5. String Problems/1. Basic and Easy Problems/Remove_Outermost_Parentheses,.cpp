    #include<bits/stdc++.h>
    using namespace std;

    class Solution {
    public:
        string removeOuterParentheses(string s) {
            string ans;
            int bal = 0;
            for(int i=0; i<s.size(); i++) {
                if(s[i] == '(') {
                    if(bal > 0) ans += s[i];
                    bal++;
                }
                else {
                    bal--;
                    if(bal > 0) ans += s[i];
                }
            }
            return ans;
        }
    };


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        //in vs code while running test cases 
        //giving input without quotes becuase if it seens this ""
        // it does not parse properly
        
        string s; cin >> s;
        Solution sol;
        cout << sol.removeOuterParentheses(s) << endl;

        return 0;
    }