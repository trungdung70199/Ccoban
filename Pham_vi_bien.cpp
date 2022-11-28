// Phạm vi của biến xác định nơi có thể truy cập vào biến
// Biến đc khai báo trong khối lệnh(block) đc gọi là biến cuc bộ

#include <iostrem>
using namespace std;

int main() {
    int local_variable;
    local_variable = 10;
    local_variable = local_variable + 1;
    cout << "Value of local_variable: " << local_variable << endl;

    system("pause");
    return 0;
}
