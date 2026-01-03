#include<iostream>
using namespace std;
int main() {
	int a[10];
	int zon = 0,dis = 9;
	cout << "ÊäÈë10¸öÊý£º";
	for (int i = 0,j=0; i < 10; i++) {
		int num;
		cin >> num;
		bool judge = true;
		for (int b = 0; b < zon; b++) {
			if (a[b] == num) {
				judge = false;
				break;
			}
		}
		if (judge) {
			a[j] = num;
			zon++;
			j++;
		}
		else {
			a[dis] = num;
			dis--;
		}
	}
	for (int i = 0; i < zon; i++) {
		cout << a[i] << " ";
	}
	return 0;
}