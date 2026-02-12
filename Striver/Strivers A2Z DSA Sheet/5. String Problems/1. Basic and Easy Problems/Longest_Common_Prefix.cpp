#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			if(str.empty()) return "";
            string prefix = str[0];

            for(int i=1; i<str.size(); i++) {
                while(str[i].find(prefix) != 0) {
                    prefix.pop_back();
                    if(prefix.empty()) return "";
                }
            }
            return prefix;
		}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    vector<string> str;
    string curr;
    bool quotes = false;

    for(int i=0; i<line.size(); i++) {
        char c = line[i];

        if(c == '"') {
            quotes = !quotes;
            if(!quotes){
                str.push_back(curr);
                curr.clear();
            }
        }
        else if(quotes) {
                curr.push_back(c);
        }
    }

    Solution s;
    cout << "\"" << s.longestCommonPrefix(str) << "\"" << endl;

    return 0;
}