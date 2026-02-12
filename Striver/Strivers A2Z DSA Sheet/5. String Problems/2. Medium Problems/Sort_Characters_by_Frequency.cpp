#include<bits/stdc++.h>
using namespace std;

#define uc unsigned char
class Solution{	
	public:
		vector<char> frequencySort(string& s){
			int freq[256] = {0};
            for(int i=0; i<s.size(); i++) {
                char c = s[i];
                freq[(uc)c]++;
            }

            vector<char> characters;
            for(int c=0; c<256; c++) {
                if(freq[(uc)c] > 0) characters.push_back((char)c);
            }

            sort(characters.begin(), characters.end(), [&](char a, char b) {
                if(freq[(uc)a] != freq[(uc)b])
                    return freq[(uc)a] > freq[(uc)b];
                return a < b;
            });

            return characters;
		}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    Solution sol;

    vector<char> result = sol.frequencySort(s);
    cout << "[";
    for(int i=0; i<result.size(); i++) {
        cout << "'" << result[i] << "'" << ((i == result.size()-1) ? "" : ",");
    }
    cout << "]";
    cout << endl;
    return 0;
}