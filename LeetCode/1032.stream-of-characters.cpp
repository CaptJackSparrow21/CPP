/*
 * @lc app=leetcode id=1032 lang=cpp
 *
 * [1032] Stream of Characters
 */

// @lc code=start
class StreamChecker {
public:
    struct Node {
        Node *child[26]{};
        bool end = false;
    };

    Node *root = new Node();
    string stream;

    void insert(string &s) {
        Node *curr = root;

        for(int i=s.size() - 1; i>=0; i--) {
            int x = s[i] - 'a';

            if(!curr->child[x])
                curr->child[x] = new Node();

            curr = curr->child[x];
        }
        curr->end = true;
    }

    StreamChecker(vector<string>& words) {
        for(auto &word : words)
            insert(word);
    }
    
    bool query(char letter) {
        stream += letter;
        Node *curr = root;
        for(int i=stream.size() - 1; i>=0; i--) {
            int x = stream[i] - 'a';

            if(!curr->child[x])
                return false;

            curr = curr->child[x];

            if(curr->end)
                return true;
        }
        return false;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
// @lc code=end

