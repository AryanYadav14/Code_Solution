#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {10, 22, 12, 3, 0, 6};
    int n = A.size();

    vector<int> leaders;
    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (A[i] > maxi) {
            leaders.push_back(A[i]);
            maxi = A[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    for (auto it : leaders) {
        cout << it << " ";
    }

    return 0;
}
