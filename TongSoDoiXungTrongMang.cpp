#include <iostream>
#define MAXN 100
void Input(int *a, int &n) {
    std :: cin >> n;
    for (int i = 0; i < n; i++)
        std :: cin >> a[i];
}
bool isSoDoiXung(int x) {
    if (x < 0) return false;
    int rev = 0, n = x;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev == x;
}
int TongSoDoiXung(int *a, const int &n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (isSoDoiXung(a[i])) sum += a[i];
    return sum;
}
int main() {
    int a[MAXN], n;
    Input(a, n);
    std::cout << TongSoDoiXung(a, n);
    return 0;
}
