#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100
struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void Nhap(SinhVien &x){
    cin >> x.MASV;
    cin.ignore();
    cin.getline(x.HoTen, 100);
    cin >> x.NgaySinh >> x.GioiTinh >> x.DiemToan >> x.DiemLy >> x.DiemHoa;
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
void Nhap(SinhVien (&x)[MAXN], int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        Nhap(x[i]);
    }
}
void Xuat(SinhVien x[MAXN], int n){
    for(int i = 0; i < n; i++) {
        Xuat(x[i]);
        if(i < n - 1) cout << "\n";
    }
}
int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
