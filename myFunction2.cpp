// a function can be called multiple times
// C++ function consist of two parts:
// Declaration & Definition

#include <iostream>
using namespace std;

void myFunction() {
    cout << "I just got executed!";
}
int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
