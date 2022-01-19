#include <iostream>
#include <iomanip>
using namespace std;
#define MAXN 101
void NhapMang(int *a, const int &n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void GiaoCua2TapHop(int *a, const int &na, int *b, const int &nb) {
    for (int i = 0; i < na; i++)
        for (int j = 0; j < nb; j++)
            if (a[i] == b[j]) {
                cout << a[i] << '\t';
                break;
            }
}
int main() {
    char op1, op2;
    cin >> op1 >> op2;
    compare_precedence(op1, op2);
    return 0;
}
