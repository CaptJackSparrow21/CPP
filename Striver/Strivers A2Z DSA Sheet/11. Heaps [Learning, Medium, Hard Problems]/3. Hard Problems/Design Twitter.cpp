//https://takeuforward.org/plus/dsa/problems/design-twitter?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

//TC: O(Q + G·T)
//Q = write ops, G = feed calls, T = tweets scanned
//Space: O(P + F)
//P = tweets stored, F = follow edges
class Twitter {
public:
    int timer = 0;
    unordered_map<int, vector<pair<int, int>>> tweets;
    unordered_map<int, unordered_set<int>> following;

    Twitter() {}

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timer++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
                            greater<>> minHeap;

        auto seen = following[userId];
        seen.insert(userId);

        for(int uid : seen) {
            for(auto &[ts, tid] : tweets[uid]) {
                minHeap.push({ts, tid});
                if(minHeap.size() > 10)
                    minHeap.pop();
            }
        }

        vector<int> feed;
        while(!minHeap.empty()) {
            feed.push_back(minHeap.top().second);
            minHeap.pop();
        }

        reverse(feed.begin(), feed.end());
        return feed;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

vector<int> extractNums(const string &s) {
    vector<int> nums;
    string curr = "";
    for(char c : s) {
        if(isdigit(c)) curr += c;
        else if(!curr.empty()) {
            nums.push_back(stoi(curr));
            curr = "";
        }
    }

    if(!curr.empty())
        nums.push_back(stoi(curr));
    return nums;
}

vector<string> parseCommands(string line) {
    line = line.substr(1, line.size() - 2);

    vector<string> cmds;
    string curr = "";
    int depth = 0;

    for(char c : line) {
        if(c == '(') depth++;
        if(c == ')') depth--;
        if(c == ',' & depth == 0) {
            cmds.push_back(curr);
            curr = "";
        }
        else {
            curr += c;
        }
    }

    if(!curr.empty())
        cmds.push_back(curr);
    return cmds;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    vector<string> cmds = parseCommands(line);

    Twitter tw;
    vector<string> results;

    for(auto &cmd : cmds) {
        vector<int> nums = extractNums(cmd);

        if(cmd.find("postTweet") != string::npos) {
            tw.postTweet(nums[0], nums[1]);
            results.push_back("null");
        }
        else if(cmd.find("getNewsFeed") != string::npos) {
            vector<int> feed = tw.getNewsFeed(nums[0]);
            if(feed.empty()) {
                results.push_back("[]");
            }
            else {
                string s = "[";
                for(int i=0; i<feed.size(); i++) {
                    s += to_string(feed[i]);
                    if(i+1 < feed.size())
                        s += ",";
                }
                s += "]";
                results.push_back(s);
            }
        }
        else if(cmd.find("unfollow") != string::npos) {
            tw.unfollow(nums[0], nums[1]);
            results.push_back("null");
        }
        else if(cmd.find("follow") != string::npos) {
            tw.follow(nums[0], nums[1]);
            results.push_back("null");
        }
    }

    cout << "[";
    for(int i=0; i<results.size(); i++) {
        cout << results[i];
        if(i+1 < results.size()) cout << ",";
    }
    cout << "]";

    return 0;
}