#include<iostream>
using namespace std;
int main() {
	float ave;
	int day=1, sum=2,a=2;
	const float p = 0.8;
	while (a*2 <= 100){
		a = a * 2;
		sum = sum + a;
		day++;
	}
	ave = sum * p / day;
	cout << ave;
	return 0;
}