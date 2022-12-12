// inside the function can add as many parameters

#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
    myFunction("Li", 3);
    myFunction("Jenney", 14);
    myFunction("An", 30);
    return 0;
}
