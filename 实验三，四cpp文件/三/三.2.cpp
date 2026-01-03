#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num % 2 != 0) {
		for (int i = 3; i < num; i++) {
			if (num % i == 0) {
				if (num == i) {
					return true;
					break;
				}
				else {
					return false;
					break;
				}
			}
			else {
				i++;
			}
		}
	}
	else if (num == 2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int twohu_su[20][10],m=2;
	for (int j=0; j<20 ; j++) {
			for (int k = 0; k < 10; k++) {
					while(!is_prime(m)) {
							m++;
					}
						twohu_su[j][k] = m;
						m++;
			}
	}
	for (int a = 0; a < 20; a++) {
		for (int b = 0; b < 10; b++) {
			cout<< twohu_su[a][b] << "\t";
		}
		cout << endl;
	}
	return 0;
}