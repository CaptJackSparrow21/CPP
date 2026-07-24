class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return 1;

        unordered_set<int> pairs;
        unordered_set<int> ans;

        for(int i=0; i<n; i++)
            for(int j=i; j<n; j++)
                pairs.insert(nums[i] ^ nums[j]);

        for(int x : pairs)
            for(int num : nums)
                ans.insert(x ^ num);

        return ans.size();
    }
};