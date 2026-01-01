#include <iostream>
using namespace std;

int main() {

    int a[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(a) / sizeof(a[0]);

    int count0 = 0, count1 = 0, count2 = 0;

    // step 1: count
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) count0++;
        else if(a[i] == 1) count1++;
        else count2++;
    }

    // step 2: overwrite array
    int idx = 0;

    while(count0--) a[idx++] = 0;
    while(count1--) a[idx++] = 1;
    while(count2--) a[idx++] = 2;

    // print result
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
