#include <iostream>
using namespace std;

int main() {
    struct {
        string brand;
        string model;
        in year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar2.brand = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.brand = "Mustang";
    myCar2.year = 1999;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    return 0;
}
