#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a,b,c,A;
	cout << "请输入值：";
	cin >> a;
	c = fabs(a), A = fabs(a),b = (c + 1) / 2 ;
		while (fabs(b - c) >= 10-5)
		{
			c = b;
			b = (b + A / b) / 2;
		}
		if (a >= 0) {
			cout << b;
		}
		else {
			cout << b << "i(原数为负数，因此不存在平方根，此结果为虚数)";
		}
	return 0;
}