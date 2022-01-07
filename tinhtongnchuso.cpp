/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
for
do
while
goto
###End banned keyword*/

#include <iostream>
int TinhTong_1(int n) {
	if (n == 1) return 1;
	else return TinhTong_1(n - 1) + n;
}
int main(){
    int n;
    std::cin >> n;
    
    std::cout << TinhTong_1(n);

    return 0;
}
