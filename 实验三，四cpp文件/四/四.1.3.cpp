#include<iostream>
using namespace std;
int main() {
	bool a[100] = {false};
	for (int i = 1; i < 101; i++) {
			for (int j = 0; i-1+i*j < 100; j++) {
				a[i - 1 + i * j] = !a[i - 1 + i * j];
			}
	}
	for (int i = 1; i < 101; i++) {
		if (a[i - 1]) {
			cout << "L" << i << ":" << a[i - 1] << " ";
		}
	}return 0;
}