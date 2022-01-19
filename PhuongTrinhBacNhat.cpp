#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "Vo so nghiem";
	}
	else if (a == 0) {
		cout << "Vo nghiem";
	}
	else if (b == 0) {
	cout << "0";
    }
	else {
		cout << -b / a;
	}
	return 0;
}
