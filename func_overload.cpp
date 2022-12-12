#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int main() {
    int myNum1 = plusFuncInt(8,5);
    double myNum2 = plusFuncDouble(5.3, 7.34);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";
    return 0;
}
