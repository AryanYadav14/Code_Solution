#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> st;

    // Step 1: insert all elements
    for(int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    int longest = 0;

    // Step 2: find sequences
    for(int i = 0; i < n; i++) {

        // start only if nums[i] is the beginning
        if(st.find(nums[i] - 1) == st.end()) {

            int current = nums[i];
            int count = 1;

            // count consecutive elements
            while(st.find(current + 1) != st.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    cout << longest << endl;

    return 0;
}
