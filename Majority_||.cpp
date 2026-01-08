#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int target = n / 3;
        vector<int> ans;

        // Step 2: Check which elements appear more than n/3 times
        for (auto it : mp) {
            if (it.second > target) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
