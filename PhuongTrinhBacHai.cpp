#include <iostream>
using namespace std;
#include <cmath>
int main() {
	float a, b, c, x1, x2;
	cin >> a >> b >> c;
	float delta = b*b - 4*a*c;
	if (delta < 0) {
		cout << "Vo nghiem";
	}
	else if (delta == 0) {
		x1 = x2 = -b / (2 * a);
		cout << "(" << x1 << ", " << x2 << ")";
	}
	else { 
		x1 = (-b - sqrt(double(delta))) / (2*a);
		x2 = (-b + sqrt(double(delta))) / (2*a);
		cout << "(" << x1 << ", " << x2 << ")";
	}
	return 0;
}
