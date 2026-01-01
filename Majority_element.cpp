#include <iostream>
using namespace std;

int main() {

    int A[] = {2,2,3,3,1,2,2};
    int n = sizeof(A) / sizeof(A[0]);


    // find max element
    int maxi = A[0];
    for(int i = 1; i < n; i++) {
        if(A[i] > maxi) maxi = A[i];
    }

    int visi[maxi + 1] = {0};

    // count frequency
    for(int i = 0; i < n; i++) {
        visi[A[i]]++;
    }

    int target = n / 2;

    // check majority
    for(int i = 0; i <= maxi; i++) {
        if(visi[i] > target) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
