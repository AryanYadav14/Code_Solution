#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    bool firstRowZero = false;
    bool firstColZero = false;

    // check first row
    for(int j = 0; j < m; j++) {
        if(matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // check first column
    for(int i = 0; i < n; i++) {
        if(matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // mark rows and columns
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // set zeroes using markers
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // zero first row
    if(firstRowZero) {
        for(int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    // zero first column
    if(firstColZero) {
        for(int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    // print result
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
