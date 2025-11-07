#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        //fix first no. of quadruple
        for(int i=0; i<n-3; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue; 

            // fix second no.
            for(int j=i+1; j<n-2; j++) {
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int left  = j+1;    //start pointer for 3rd no.
                int right = n-1;    //end pointer for 4th no.

                //finding remaining two no.
                while(left < right) {
                    long long sum = (long long)nums[i] + nums[j] +
                                                nums[left] + nums[right]; 
                    if(sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        while(left < right && nums[left] == nums[left+1]) left++; 
                        left++;
                        while(left < right && nums[right] == nums[right-1]) right--; 
                        right--;
                    }

                    else if(sum < target) {
                        left++;
                    }

                    else{
                        right--;
                    }
                }
            }
        }
        return result;
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

    int target ; cin >> target;

    Solution s;
    vector<vector<int>> ans = s.fourSum(nums, target);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j];
            if(j != ans[0].size()-1) cout << ",";
        }
        cout << "]";
        if(i != ans.size()-1) cout << ",";
    }
    cout << "]";
    return 0;
}