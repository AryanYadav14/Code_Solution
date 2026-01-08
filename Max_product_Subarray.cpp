#include <bits/stdc++.h>
using namespace std;

int subarrayWithMaxProduct(vector<int>& arr) {
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;

        pre = pre * arr[i];
        suff = suff * arr[n - i - 1];

        ans = max(ans, max(pre, suff));
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 3, -2, 4};

    int result = subarrayWithMaxProduct(arr);

    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}
