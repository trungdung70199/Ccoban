// OOP-Object Oriented Programming(lap trinh huong doi tuong)
#include <iostream>
using namespace std;

class Myclass {
    public:
        int myNum;
        string myString;
}

int main() {
    Myclass myObj;
    myObj.myNum = 15;
    myObj.myString = "Something";

    cout << myObj.myNum;
    cout << myObj.myString;
    return 0;
}
