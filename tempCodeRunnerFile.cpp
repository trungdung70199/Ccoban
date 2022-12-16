#include <iostream>
#include <string>
using namespace std;

struct ConNguoi{
    string name;
    int age;
    float hight;
    float weight;  
};
void chi_so_BMI(ConNguoi nguoi) {
    float BMI = nguoi.weight/(nguoi.height * nguoi.height);
    string ket_qua;
    if (BMI < 18.5) {
        ket_qua = "thin";
    }
    else if ( BMI > 25) {
        ket_qua = "fat";
    }
    else {
        ket_qua = "nomarl"
    }

    cout << "Ket qua BMI cua ban " << name << " la " << ket_qua << endl; 
};

int main() {
    ConNguoi nguoi;
    nguoi.name = "Nguyen Hoang Trung Dung";
    nguoi.hight = "1.80";
    nguoi.age = "23";
    nguoi.weight = "70";

    chi_so_BMI(nguoi);
    system("pause"); 
    return 0;
}