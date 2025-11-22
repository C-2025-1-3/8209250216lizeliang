#include<iostream>
using namespace std;
int main() {
	int num1, num2,GCD,LCM,min;
	cout << "num1=";
	cin >> num1;
	cout << "num2=";
	cin >> num2;
	min = (num1 < num2) ? num1 : num2;
	/*while (num1 % min != 0 || num2 % min != 0) {
		min--;
	}*/
	for (; num1 % min != 0 || num2 % min != 0;min--) {
	
	}
	GCD = min, LCM = num1 * num2 / GCD;
	cout << "最大公约数：" << GCD << '\t' << "最小公倍数：" << LCM;
	return 0;
}