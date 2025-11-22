#include<iostream>
using namespace std;
int main()
{
	int a, b, c,d;
	cout << "三边长：";
	cin >> a >> b >> c;
	if (a + b > c) {
		if (a + c > b) {
			if (b + c > a) {
				d = a + b + c;
				cout << "周长=" << d << endl;
				if (a == b || a == c || b == c)
					cout << "是等腰三角形" << endl;
				else
					cout << "不是等腰三角形" << endl;
			}
			else
				cout << " 不存在" << endl;
		}
		else
			cout << " 不存在" << endl;
	}
	else
		cout << " 不存在" << endl;
	
	return 0;
}