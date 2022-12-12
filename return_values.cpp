// If want the function to return a value,
//can usen data type(such as int, string, etc..)
// instead of void, and use the return keyword inside the function

#include <iostream>
using namespace std;

int myFunction(int x) {
    return 5 + x;
}
int main() {
    cout << myFunction(3);
    return 0;
}
