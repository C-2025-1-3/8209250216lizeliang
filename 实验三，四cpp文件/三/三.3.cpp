#include<iostream>
#include"my.h"
#include<iomanip>
using namespace std;
int main() {
	double c1, c2, f1, f2;
	cout << "Celsius" << "\t" << "Fahrenheit" << "  |  " << "Fahrenheit" << "\t" << "Celsius" << endl;
	for (c1 = 40, f2 = 120; c1 > 30; c1--, f2 -= 10) {
		f1 = ctof(c1);
		c2 = ftoc(f2);
		cout << fixed << setprecision(1) << c1 << "\t" << f1 << "  |  " << f2 << "\t";
		cout << fixed << setprecision(2) << c2 << endl;
	}
}

