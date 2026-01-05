#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {10, 22, 12, 3, 0, 6};
    int n = A.size();

    vector<int> leaders;

    for (int i = 0; i < n; i++) {
        bool isLeader = true;

        for (int j = i + 1; j < n; j++) {
            if (A[j] >= A[i]) {
                isLeader = false;
                break;
            }
        }

        if (isLeader) {
            leaders.push_back(A[i]);
        }
    }

    for (auto it : leaders) {
        cout << it << " ";
    }

    return 0;
}
