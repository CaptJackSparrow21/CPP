/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */

// @lc code=start
class MedianFinder {
public:
    priority_queue<int> leftMax;
    priority_queue<int, vector<int>, greater<int>> rightMin;

    MedianFinder() {}
    
    void addNum(int num) {
        leftMax.push(num);

        rightMin.push(leftMax.top());
        leftMax.pop();

        if(rightMin.size() > leftMax.size()) {
            leftMax.push(rightMin.top());
            rightMin.pop();
        }
    }
    
    double findMedian() {
        if(leftMax.size() == rightMin.size()) {
            return (leftMax.top() + rightMin.top()) / 2.0;
        }

        return leftMax.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

