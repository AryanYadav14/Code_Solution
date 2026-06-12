#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> nums) {
    long long n = nums.size();

    long long SN = n * (n + 1) / 2;
    long long S2N = n * (n + 1) * (2*n + 1) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += nums[i];
        S2 += (long long)nums[i] * nums[i];
    }

    long long diff1 = S - SN;        // x - y
    long long diff2 = S2 - S2N;      // x² - y²

    long long sumXY = diff2 / diff1; // x + y

    long long x = (diff1 + sumXY) / 2;
    long long y = x - diff1;
    return {(int)x, (int)y};
}

int main() {
    vector<int> a = {4, 3, 6, 2, 1, 1};

    vector<int> ans = findMissingRepeatingNumbers(a);

    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}
