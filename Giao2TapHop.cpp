#include <iostream>
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
    int a[MAXN], b[MAXN];
    int na, nb;
    std::cin >> na;
    std::cin >> nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    GiaoCua2TapHop(a, na, b, nb);
    return 0;
}
