#include<bits/stdc++.h>
using namespace std;

//Brute Force 
//T.C. = O(n^2) ,   S.C. = O(1)
//
// class Solution {
// public:
//    long long int numberOfInversions(vector<int> nums) {
//         long long int count = 0;
//         int n = nums.size();
//         for(int i=0; i<n; i++) {
//             for(int j=i+1; j<n; j++) {
//                 if(nums[i] >  nums[j]) count++;
//             }
//         }
//         return count;
//     }
// };

//Optimal one 
// T.C. = O(n log n) ,  S.C. = O(n) for temporary arrays
//
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        return mergeSortAndCount(nums, 0, nums.size() - 1);
    }

private:
    long long int mergeSortAndCount(vector<int> nums, int left, int right) {
        long long int count = 0;
        if(left <  right) {
            int mid = left + (right - left) / 2;
            // count inversions in left half
            count += mergeSortAndCount(nums, left,mid);

            //count inversions in right half
            count += mergeSortAndCount(nums, mid + 1, right);

            //count inversions during merge
            count += mergeAndCount(nums, left, mid, right);
        }
        return count;
    }

    long long int mergeAndCount(vector<int> nums, int left, int mid, int right) {
        vector<int> leftArr(nums.begin() + left, nums.begin() + mid + 1);
        vector<int> rightArr(nums.begin() + mid + 1, nums.begin() + right + 1);

        int i=0, j=0, k=left;
        long long int count =0;

        while(i < leftArr.size() && j < rightArr.size()) {
            if(leftArr[i] <= rightArr[j]) {
                nums[k++] = leftArr[i++];
            } else {
                nums[k++] = rightArr[j++];
    // All remaining elements in leftArr are greater than current rightArr element
                count += (leftArr.size() - i);
            }
        }
        
        //copy remaining elements
        while(i < leftArr.size()) {
            nums[k++] = leftArr[i++];
        }
        while(j < rightArr.size()) {
            nums[k++] = rightArr[j++];
        }

        return count;
    }

};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    vector<int> nums;
    stringstream ss(input);
    string temp;
    while(getline(ss, temp, ',')) {
        if(!temp.empty()) {
            nums.push_back(stoi(temp));
        }
    }

    Solution s;
    cout << s.numberOfInversions(nums) << endl;

    return 0;
}