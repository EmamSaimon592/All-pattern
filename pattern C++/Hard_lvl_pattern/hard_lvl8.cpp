#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces (from 6 to 2, decrementing)
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        // Print character repeated (i + 1) times
        for (int k = 0; k <= i; k++) {
            cout <<" "<< char('A' + i);
        }
        cout << endl;
    }

    return 0;
}

  //     A
  //    B B
  //   C C C
  //  D D D D
  // E E E E E