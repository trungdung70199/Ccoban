#include <iostream>
using namespace std;

int myFunction(int x, int y) {
    return x + y;
}

int main() {
    cout << myFunction(5,3);
    // can write:
    // int z = muFunction(5,3);
    //cout << z << "\n";
    return 0;
}