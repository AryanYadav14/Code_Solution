#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithZeroSum(vector<int>& nums) {
    unordered_map<int, int> mp;
    int sum = 0;
    int maxLen = 0;

    mp[0] = -1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (mp.find(sum) != mp.end()) {
            int len = i - mp[sum];
            maxLen = max(maxLen, len);
        } else {
            mp[sum] = i;
        }
    }

    return maxLen;
}
