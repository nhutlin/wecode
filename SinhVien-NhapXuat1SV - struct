#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien &x) {
    cin >> x.MASV;
    cin.ignore();
    cin.getline(x.HoTen, 100);
    cin >> x.NgaySinh >> x.GioiTinh >> x.DiemToan >> x.DiemLy >> x.DiemHoa;
    x.DTB = (x.DiemHoa + x.DiemToan + x.DiemLy) / 3.0;
}
void Xuat(SinhVien x) {
    cout << x.MASV << "\t"
         << x.HoTen <<"\t"
         << x.NgaySinh << "\t"
         << x.GioiTinh << "\t"
	     << x.DiemToan << "\t"
	     << x.DiemLy << "\t"
	     << x.DiemHoa << "\t"
    	 <<  setprecision(3) << x.DTB;
}
int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
