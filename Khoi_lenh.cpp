#include <iostream>
using namespace std;
int main() {
    int variable = 1;

    {
        int variable = 10;
        cout << "The varibale inside this block is not concering the variable above" << endl;
        cout << "We print the value of the second variable:" << variable << endl;

    }
    cout << "We print the value of the firts variable:" << variable << endl;
    return 0;
}
