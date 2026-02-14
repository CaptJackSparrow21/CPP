//https://takeuforward.org/plus/dsa/problems/letter-combinations-of-a-phone-number

#include<bits/stdc++.h>
using namespace std;

//TC = O(4^n) && SC = O(n)
class Solution{
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> mapping = {
            "abc", "def", "ghi", "jkl", "mno", "pqrs",
            "tuv", "wxyz"
        };

        vector<string> res;
        string path;
        function<void(int)> dfs = [&] (int i) {
            if(i == (int)digits.size()) {
                res.push_back(path);
                return;
            }

            string &letters = mapping[digits[i] - '2'];
            for(char ch : letters) {
                path.push_back(ch);
                dfs(i+1);
                path.pop_back();
            }
        };
        dfs(0);
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string digits;
    getline(cin, digits);

    Solution sol;
    vector<string> ans = sol.letterCombinations(digits);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}