#include <iostream>
using namespace std;

class Employee {
    private:
        int salary;
    public:

         void setSalary(int s) {
            salary = ;s
         }
         int getSarlary() {
            return salary;
         }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSarlary();
    return 0;
}
