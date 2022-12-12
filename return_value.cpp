//The return Keyword
// The function to return a value use a data type(string, int,..)
// instead of void, and use return inside the function

#include <iostream>
using namespace std;

int myFunction(int x) {
    return 5 + x;
}
int main() {
    cout << myFunction(3);
    return 0;
}
