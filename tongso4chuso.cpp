#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin >> n;
    a = n / 1000;
    b = (n % 1000) / 100;
    c = ((n % 1000) % 100) / 10;
    d = ((n % 1000) % 100) % 10;
    cout << a + b + c + d << ", " << a << ", " << d;
    return 0;
}
