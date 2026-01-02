#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        int comb[n];
        int k = 0;


        for (int i = 0; i < n1; i++) {
            comb[k++] = nums1[i];
        }
        

        for (int i = 0; i < n2; i++) {
            comb[k++] = nums2[i];
        }
        sort(comb, comb + n);

        double median;
        if (n % 2 == 1) {
            median = comb[n / 2];
        } else {
            median = (comb[n / 2 - 1] + comb[n / 2]) / 2.0;
        } 
        return median;
    }
};

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution sol;
    double result = sol.findMedianSortedArrays(nums1, nums2);

    cout << "Median = " << result << endl;

    return 0;
}
