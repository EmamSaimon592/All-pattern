#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 0; k < n - i; k++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}

 * * * * *
  * * * *
   * * *
    * *
     *