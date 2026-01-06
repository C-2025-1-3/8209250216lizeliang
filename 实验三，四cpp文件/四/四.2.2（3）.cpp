#include<iostream>
using namespace std;
void line(int* a, int size) {
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size - 1 - j; i++){
			if (a[i] > a[i + 1]) {
				int num = a[i];
				a[i] = a[i + 1];
				a[i + 1] = num;
			}
		}
	}
}
int main() {
	int size;
	cout << "input size:";
	cin >> size;
	int* e = new int[size];
	cout << "input content:";
	for (int i = 0; i < size; i++) {
		cin >> e[i];
	}
	line(e, size);
	int* p = e;
	cout << "Êý×é£º";
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	delete[]e;
	return 0;
}
