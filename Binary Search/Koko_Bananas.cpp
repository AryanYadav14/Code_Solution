#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>& v) {
    int maxi = INT_MIN;
    for (int x : v) {
        maxi = max(maxi, x);
    }
    return maxi;
}

int calculateTotalHours(vector<int>& v, int k) {
    int totalH = 0;
    for (int x : v) {
        totalH += ceil((double)x / (double)k);
    }
    return totalH;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = findMax(piles);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // predicate: can Koko finish in <= h hours?
        if (calculateTotalHours(piles, mid) <= h) {
            ans = mid;        // valid speed
            high = mid - 1;   // try smaller (lower bound)
        } else {
            low = mid + 1;    // invalid, increase speed
        }
    }
    return ans;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}
