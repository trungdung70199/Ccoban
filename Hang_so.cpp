// Vi du
#include <iostream>
using namespace srd;
int main() {
    int myVar = 1;
    cout << "Default value: " << myVar << endl;
    cout << "Change value of myVar (1): ";
    cin >> myVar;
    cout << "New value: " << myVar << endl;
    cout << "Change value or myVar (2): ";
    cin >> myVar;
    cout << "New value: " << myVar << endl;
    system("pause");
    return 0;    
}
