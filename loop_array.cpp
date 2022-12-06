// Loop theough an array with sizeof()

#include <iostream>
using namespace std;

int main() {
    int myNumber[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumber) / sizeof(int); i++) {
        cout << myNumber[i] << "\n";
    }
    return 0;
}
