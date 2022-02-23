#include <iostream>
using namespace std;

int main() {
	float a, b;
	cout << "Phuong trinh bac nhat co dang: ax + b = 0" << endl;
	cout << "Nhap he so a: ";
	cin >> a;
	cout << "Nhap he so b: ";
	cin >> b;
	if (a == 0 && b == 0) {
		cout << "Phuong trinh vo so nghiem";
	}
	else if (a == 0) {
		cout << "Phuong trinh vo nghiem";
	}
	else if (b == 0) {
	cout << "x = 0";
    }
	else {
		cout << "x = " << -b / a;
	}
	return 0;
}
