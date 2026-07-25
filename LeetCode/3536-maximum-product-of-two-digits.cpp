class Solution {
public:
    int maxProduct(int n) {
        vector<int> d;
        while(n) {
            d.push_back(n % 10);
            n /= 10;
        }

        sort(d.rbegin(), d.rend());
        return d[0] * d[1];
    }
};