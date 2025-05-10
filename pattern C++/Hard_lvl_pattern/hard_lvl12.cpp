#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the pattern (should be odd for symmetry)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' on both diagonals
            if (i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// *   *
//  * * 
//   *  
//  * * 
// *   *