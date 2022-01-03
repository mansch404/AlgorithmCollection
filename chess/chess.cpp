#include <iostream>
using namespace std;

int main() {
    for (int x = 0; x < 8;x++) {
        for (int y = 0; y < 8;y++) {
            if(x % 2 == 0) {
                if(y % 2 == 0) {
                    cout << "w";
                } else {
                    cout << "b";
                }
            } else {
                if(y % 2 == 0) {
                    cout << "b";
                } else {
                    cout << "w";
                }
            }

            if(x == 7) {
                cout << "\n";
            }
        }
    }
    return 0;
}