#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size();

    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;

    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;        // x - y
    long long val2 = S2 - S2N;      // x^2 - y^2

    val2 = val2 / val1;             // x + y

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main() {
    vector<int> a = {4, 3, 6, 2, 1, 1};

    vector<int> ans = findMissingRepeatingNumbers(a);

    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}
