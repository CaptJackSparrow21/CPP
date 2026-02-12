#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i>=0 && j>=0) {
            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        
        while(j>=0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line1, line2; //nums1, nums2
    getline(cin, line1);
    getline(cin, line2);

    auto extract = [] (const string &s) {
        vector<int> result;
        size_t l = s.find("[");
        size_t r = s.find("]");

        string nums = s.substr(l+1, r-l-1);
        stringstream ss(nums);
        int x;
        while(ss >> x) {
            result.push_back(x);
            if(ss.peek() == ',') ss.ignore();
        }
        return result;
    };

    vector<int> nums1 = extract(line1);
    vector<int> nums2 = extract(line2);

    int n = nums2.size();
    int m = nums1.size();

    nums1.resize(m + n); // add n zeros for merge room

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "[";
    for(int i=0; i<nums1.size(); i++) {
        cout << nums1[i];   
        if(i != nums1.size() - 1) cout << ",";
    }
    cout << "]\n";

    return 0;
}