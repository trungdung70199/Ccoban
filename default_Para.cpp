// Default Parameters (tham so mac dinh)
// if we call the function without an argument, it uses the default value("Norway")

#include <iostream>
using namespace std;

void myFunction(string country = "Norway") {
    cout << country << "\n";
}
int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("Vietnam");
    return 0;
}
