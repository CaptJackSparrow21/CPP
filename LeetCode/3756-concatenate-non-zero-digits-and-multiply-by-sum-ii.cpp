class Solution {
    #define ll long long
    static constexpr int mod = 1e9 + 7;
    static constexpr int MAX = 100001;
    inline static int pow[MAX];

    inline static int init = []() {
        pow[0] = 1;
        for(int i=1; i<MAX; i++)
            pow[i] = pow[i-1] * 10LL % mod;
        return 0;
    }();

public:

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.length();

        vector<int> a(n+1, 0), b(n+1, 0), bLen(n+1, 0);

        for(int i=0; i<n; i++) {
            int d = s[i] - '0';
            a[i+1] = a[i] + d;
            b[i+1] = d ? (b[i] * 10LL + d) % mod : b[i];
            bLen[i+1] = bLen[i] + (d > 0);
        }

        vector<int> res;
        res.reserve(queries.size());
        
        for(auto &q : queries) {
            int l = q[0], r = q[1] + 1; 

            ll sub = b[l] * 1LL * pow[bLen[r] - bLen[l]] % mod;
            ll x = (b[r] - sub + mod) % mod;
            
            res.push_back(x * (a[r] - a[l]) % mod);
        }
        return res;
    }
};