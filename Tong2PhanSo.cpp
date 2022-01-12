#include <iostream>
#include <cmath>
using namespace std;
struct PhanSo {
    int tu, mau;
};
int ucln(int a, int b) {
    if (b == 0)
        return a;
    return ucln(b, a % b);
}
void Rutgon(PhanSo &a) {
    int u = abs(ucln(a.tu, a.mau));
    if (a.tu != 0 && a.mau < 0)
        u = -u;
    a.tu /= u;
    a.mau /= u;
}
void Nhap(PhanSo &a) {
    cin >> a.tu >> a.mau;
}
PhanSo Nhap() {
    PhanSo p;
    Nhap(p);
    return p;
}
void Xuat(PhanSo p) {
    cout << p.tu;
    if (abs(p.mau) != 1 && abs(p.tu) >= 0)
        cout << "/" << p.mau;
}
PhanSo Cong(PhanSo a, PhanSo b) {
    PhanSo tong;
    tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
    Rutgon(tong);
    return tong;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}