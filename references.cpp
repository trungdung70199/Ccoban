// A reference variable is a "reference" to an existing variable
// it is created  with the & operator
 
#include <iostream>
using namespace std;

int main() {
    string food = "pizza";
    string &meal = food;
    
    cout << food << "\n";
    cout << meal << "\n";
    return 0; 
}
