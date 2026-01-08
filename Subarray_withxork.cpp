#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithXorK(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int xr = 0;
    int count = 0;

    mp[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
        xr ^= nums[i];

        int want = xr ^ k;

        if (mp.find(want) != mp.end()) {
            count += mp[want];
        }

        mp[xr]++;
    }

    return count;
}
