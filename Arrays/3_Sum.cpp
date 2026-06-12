#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        // Step 1: sort the array
        sort(nums.begin(), nums.end());

        // Step 2: fix i
        for (int i = 0; i < n; i++) {

            // skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;

            // Step 3: two sum using j and k
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    // skip duplicate j
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    // skip duplicate k
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return ans;
    }
};
