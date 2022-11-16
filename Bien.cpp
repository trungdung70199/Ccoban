// Variable
// Cach khai bao bien trong C++:
//<kieu du lieu> <ten bien> = [Gia tri khoi tao cua bien]

#include <iostream>
using namespace std;
int main() {
    int number_of_cows = 30;
    cout << "The number of legs: " << number_of_cows * 4 << endl;
    number_of_cows = number_of_cows + 10;
    cout << "The number of legs (afer 1 year): " << number_of_cows * 4 << endl;

    system("pause") 
    return 0;
}

