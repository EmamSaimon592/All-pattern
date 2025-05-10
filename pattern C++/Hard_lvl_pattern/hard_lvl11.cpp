#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the pattern (must be odd for symmetry)
    int mid = n / 2; // Middle row and column

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' in middle row or middle column
            if (i == mid || j == mid) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

//   *  
//   *  
// *****
//   *  
//   *  