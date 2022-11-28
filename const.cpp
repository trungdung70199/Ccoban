// Khai báo hằng số
// Thêm từ khóa const vào trước hoặc sau kiểu dữ liệu của biến 
// Ví dụ
// const float gravity = 9.8;
// int const my_constant = 123;
// Phải khởi tạo giá trị cho biến hằng số mỗi khi định nghĩa chúng
// Định nghĩa hằng số không có giá trị khởi tạo sẽ phát sinh lỗi khi biên dịch


#include <iostream>
using namespace std;
int main() {
    const int my_constant;
    system("pause");
    return 0;
}

// Có thể sử dụng giá trị của một biến không phải là hằng số để khởi tạo cho 1 biến hằng số
// Ví dụ
// int non_const_variable = 10;
// const int const_variable = non_const_variable;

