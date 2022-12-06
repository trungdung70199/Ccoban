// Cú pháp vòng lặp for_each
// for(element_declaration:array)
//      statement:
// element_declaration: là một khai báo biến hoặc tham chiếu có kiểu trùng với kiểu của các phần tử trong array.
// Thường sử dụng từ khóa auto.
// array: mảng hoặc cấu trúc danh sách cần lặp.
// statement: câu lệnh đơn hoặc khối lệnh.
#include <iostream>
using namespace std;

int main() {
    int myNumber[5] = {10, 20, 30, 40, 50};
    for (int i : myNumber) {
        cout << i << "\n";
    }
    return 0;     
}
