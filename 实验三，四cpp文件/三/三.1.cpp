#include<iostream>
using namespace std;
int ans(int &a,int &b) {
	int c = a > b ? a : b, d = a > b ? b : a;
	while (c != 0) {
		int i = c;
		c = i % d;
		d = i;
	}
	int gcd = d;
	int lcm = a * b / gcd;
	return lcm;
}
int main() {
	int m, n;
	cout << "输入自然数m：";
	cin >> m;
	cout << "输入自然数n：";
	cin >> n;
	int LCM = ans(m, n);
	cout << "最小公倍数为" << LCM << endl;
}