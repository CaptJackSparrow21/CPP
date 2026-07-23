class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n = nums.size();
        
        if(n < 3)
            return n;
        return 1 << bit_width(n);
    }
};