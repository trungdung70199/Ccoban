#include <iostream>
using namespace std;

void myFunction(string fname) {
    cout << fname << " Refsnes\n";
}
int main() {
    myFunction("Lion");
    myFunction("Jenny");
    myFunction("Anna");
    return 0;
}
