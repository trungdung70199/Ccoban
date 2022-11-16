// Cac kieu du lieu co ban
// Kieu logic(boolean): bool
// Kieu ki tu(character): char, wchar_t, char16_t
// Kieu so nguyen(integer): short, int, long,..
// Kieu so thuc(float): float, double, long double
// De xem kich thuoc vung nho se duoc cap phap cho bien trong chuong trinh
// thi su dung toan tu sizeof()

#include <iostream>
using namespace std;
int main() {
    cout << "Size of bool variable: " << sizeof(bool) << endl;
    cout << "Size of char variable: " << sizeof(char) << endl;
    cout << "Size of int variable: " << sizeof(int) << endl;
    cout << "Size of float variable: " << sizeof(float) << endl;
    cout << "Size of double variable: " << sizeof(double) << endl;

    system("pause");
    return 0;
}
