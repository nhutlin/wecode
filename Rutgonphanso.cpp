#include <iostream>
using namespace std;
#include <cmath>

const int MAXN = 100;

struct PhanSo {
  int tu;
  int mau;
};

int ucln(int a, int b) {
  if (b == 0) return a;
  return ucln(b, a % b);
}

void Rutgon(PhanSo a) {
  int u = abs(ucln(a.tu, a.mau));
  if (a.tu != 0 && a.mau < 0) u = -u;
  a.tu /= u;
  a.mau /= u;
  cout << a.tu;
  if (abs(a.mau) != 1 && abs(a.tu) >= 0) cout << "/" << a.mau;
}

void Nhap(PhanSo (&a)[MAXN], int &n) {
    cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i].tu >> a[i].mau;
}

void Xuat(const PhanSo (&a)[MAXN], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i].mau == 0)
      cout <<  "Khong thoa yeu cau bai toan";
    else
      Rutgon(a[i]);
    if (i < n - 1) cout << "\n";
  }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}
