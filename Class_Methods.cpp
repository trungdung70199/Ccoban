#include <iostream>
using namespace std;

class MyClass {
    public:
        void myMethod() {
            cout << "HELLO WORLD!";
        }    
};

int main() {
    MyClass myObj;
    myObj.myMethod();
    return 0;
}
