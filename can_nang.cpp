#include <iostream>
#include <string>
using namespace std;

struct ConNguoi
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    float can_nang;
    int so_do_3_vong[2];
};

string chi_so_BMI(ConNguoi nguoi) {
    float BMI = nguoi.can_nang/(nguoi.chieu_cao * nguoi.chieu_cao);
    string ket_qua;
    if (BMI < 18.5) {
        ket_qua = "thin";
    }
    else if ( BMI > 25) {
        ket_qua = "fat";
    }
    else {
        ket_qua = "nomarl";
    }
    return ket_qua; 
}

void thoi_gian(ConNguoi nguoi, int nam)
{
    for (int i = 0; i < nam; i++)
    {
        nguoi.can_nang = nguoi.can_nang + 2;
    }
    string ket_qua = chi_so_BMI(nguoi);
    cout << "Ban " << nguoi.ho_ten << nam << " nam sau se " << ket_qua << endl;
}

int main() {
    ConNguoi nguoi;
    nguoi.ho_ten = "Trung Dung";
    nguoi.tuoi = 23;
    nguoi.chieu_cao = 1.80;
    nguoi.can_nang = 70;
    thoi_gian(nguoi, 5);
    //ConNguoi * pointer = &nguoi;
    //cout << pointer << endl;
    return 0;
}
