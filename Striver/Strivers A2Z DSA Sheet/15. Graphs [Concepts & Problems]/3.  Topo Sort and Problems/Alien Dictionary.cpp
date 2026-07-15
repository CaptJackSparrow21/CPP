//https://takeuforward.org/plus/dsa/problems/alient-dictionary?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(K + E) , E -> total characters
class Solution {
public:
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K);
        vector<int> indegree(K, 0);

        for(int i=0; i < N - 1; i++) {
            string &s1 = dict[i];
            string &s2 = dict[i+1];

            int len = min(s1.size(), s2.size());
            bool found = false;

            for(int j=0; j<len; j++) {
                if(s1[j] != s2[j]) {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    indegree[s2[j] - 'a']++;    
                    found = true;
                    break;
                }
            }

            if(!found && s1.size() > s2.size())
                return "";
        }

        queue<int> q;
        for(int i=0; i<K; i++)
            if(indegree[i] == 0)
                q.push(i);

        string ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans += char(node + 'a');
            for(int next : adj[node]) {
                indegree[next]--;
                if(indegree[next] == 0)
                    q.push(next);
            }
        }

        if(ans.size() != K)
            return "";
        
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;
    cin.ignore();

    string line;
    getline(cin, line);

    vector<string> words;
    string curr;

    for(char ch : line) {
        if(isalpha(ch))
            curr += ch;
        else {
            if(!curr.empty()) {
                words.push_back(curr);
                curr.clear();
            }
        }
    }

    string dict[N];

    for(int i=0; i<N; i++)
        dict[i] = words[i];

    Solution sol;
    string ans = sol.findOrder(dict, N, K);

    if(ans == "")
        cout << " ";
    else {
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i];
            if(i+1 != ans.size())
                cout << ' ';
        }
    }

    return 0;
}