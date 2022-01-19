#include <iostream>
using namespace std;
void NhapMaTran(int **&a, int &r, int &c) {
	cin >> r >> c;
	a = new int* [r];
	for(int i = 0; i < r; i++)
		a[i] = new int[c];
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			cin >> a[i][j];
}
int minDong(const int *a, int n) {
	int min = a[0];
	for(int i = 1; i < n; i++)
		if(min > a[i])
			min = a[i];
	return min;
}
int TongCacGiaTriNhoNhatTrenDong(int **a, int r, int c) {
	int sum = 0;
	for(int i = 0; i < r; i++)
		sum += minDong(a[i], c);
	return sum;
}
int main() {
    int **a, r, c;
    NhapMaTran(a, r, c);
    std::cout << TongCacGiaTriNhoNhatTrenDong(a, r, c);
    return 0;
}
