#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int>& arr, int k) {
    map<int, int> mpp;
    mpp[0] = 1;

    int preSum = 0, cnt = 0;

    for(int i = 0; i < arr.size(); i++) {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum]++;
    }

    return cnt;
}

int main() {
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k;
    cin >> k;

    int result = findAllSubarraysWithGivenSum(arr, k);
    cout << result << endl;

    return 0;
}
