// ham setprecision nhan vao la mot so nguyen nhung voi muc dich
// dinh dang so luong chu so trong phan thap phan cua kieu so thuc
// Gan giong decimal

#include <iostream>
#include <iomanip>

int main() {
    cout << 0.12345678 << endl;

    cout << setprecision(9) << endl;
    cout << 0.123456789 << endl;

    cout << setprecision(3) << endl;
    cout << 0.123456789 << endl;

    system("pause");
    return 0;
}