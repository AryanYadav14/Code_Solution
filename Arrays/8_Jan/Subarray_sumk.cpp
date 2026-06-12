#include <bits/stdc++.h>
using namespace std;

int longestSubarraySumK(vector<int>& nums, int k)
{
    unordered_map<int, int> mp;

    int sum = 0;
    int maxLen = 0;

    mp[0] = -1;

    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if(mp.find(sum - k) != mp.end())
        {
            int len = i - mp[sum - k];
            maxLen = max(maxLen, len);
        }

        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    return maxLen;
}