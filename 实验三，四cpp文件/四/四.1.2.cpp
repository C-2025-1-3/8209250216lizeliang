#include<iostream>
using namespace std;
double kkk(double a[10]) {
	for (int j = 0;  j < 10; j++) {
		for (int i = 0; i < 9-j; i++) {
			if (a[i] > a[i + 1]) {
				double num=a[i];
				a[i] = a[i + 1];
				a[i + 1] = num;
			}
		}
	}
	return 0;
}
int main() {
	double k[10];
	cout << "input 10 number:";
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}
	kkk(k);
	for (int i = 0; i < 10; i++) {
		cout << k[i]<<" ";
	}
	return 0;
}