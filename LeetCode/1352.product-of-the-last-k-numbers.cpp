/*
 * @lc app=leetcode id=1352 lang=cpp
 *
 * [1352] Product of the Last K Numbers
 */

// @lc code=start
class ProductOfNumbers {
public:
    vector<int> pre;

    ProductOfNumbers() {
        pre = {1};
    }
    
    void add(int num) {
        if(num == 0)
            pre = {1};
        else    
            pre.push_back(pre.back() * num);
    }
    
    int getProduct(int k) {
        if(k >= pre.size())
            return 0;
        return pre.back() / pre[pre.size() - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
// @lc code=end

