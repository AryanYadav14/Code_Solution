#include <iostream>
using namespace std;

int main() {

    int a[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(a) / sizeof(a[0]);

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high) {
        if(a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if(a[mid] == 1) {
            mid++;
        }
        else { // a[mid] == 2
            swap(a[mid], a[high]);
            high--;
        }
    }

    // print array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
