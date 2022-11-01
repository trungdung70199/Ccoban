#include <iostream>
using namespace std;
int main(){
    int a;
    cinn >> a;
    if (a > 0) {
        cout << "a la so duong!";        
    }
    else if (a < 0) {
        cout << "a la so am!";
    }
    else {
        cout << "a bang khong!";
    }
    return 0;
}