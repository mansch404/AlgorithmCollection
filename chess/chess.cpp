#include <iostream>
using namespace std;

// main method
int main() {
    for (int x = 0; x < 8;x++) {
        for (int y = 0; y < 8;y++) {
            if(x % 2 == 0) {
                cout << "w"; // prints out the white color
            } else {
                cout << "b"; // prints out the black color
            }

            if(x == 7) {
                cout << "\n";
            }
        }
    }
    return 0;
}