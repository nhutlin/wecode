/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct SinhVien {
    char *MASV;
    char *HoTen;
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien *&x) {
	x = new SinhVien;
	x->MASV = new char[100];
    cin >> x->MASV;
    cin.ignore();
    x->HoTen = new char[30];
    cin.getline(x->HoTen, 30);
    cin.getline(x->NgaySinh, 12);
    cin >> x->GioiTinh >> x->DiemToan >> x->DiemLy >> x->DiemHoa;
    x->DTB = (x->DiemToan + x->DiemHoa + x->DiemLy) / 3.0;
}
void Xuat(SinhVien x) {
    x.DTB = (x.DiemHoa + x.DiemToan + x.DiemLy) / 3.0;
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
    SinhVien *A;
    Nhap(A);
    Xuat(*A);
    return 0;
}
