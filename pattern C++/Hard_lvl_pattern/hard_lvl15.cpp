#include <iostream>
using namespace std;

int main() {
    int n = 4; // maximum number of stars in the middle row

    // Upper part
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part (mirror image)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//output will be :
   *
  **
 ***
****
 ***
  **
   *
