#include <iostream>
using namespace std;
typedef struct Point {
	float x, y;
}POINT;
POINT Nhap1() {
    Point a;
    cin >> a.x >> a.y;
    return a;
}
void Xuat(Point *&a, int const &n){
    for (int i = 0; i < n; i++)
	 cout << '(' << a[i].x << ", " << a[i].y << ")\n";
}
void Nhap(Point *&p, int &n){
    cin >> n;
    p = new Point[n];
    for(int i = 0; i < n; i++)
        p[i] = Nhap1();
}
int main() {
    Point *points;
    int n;
    Nhap(points, n);
    Xuat(points, n);
    return 0;
}