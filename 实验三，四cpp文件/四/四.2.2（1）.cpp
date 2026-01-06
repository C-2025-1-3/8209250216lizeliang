#include<iostream>
using namespace std;
int indexof(const char *s1, const char *s2) {
	int size1 = strlen(s1), size2 = strlen(s2);
	if (size1 > size2) {
		return -1;
	}
	for (int i = 0; i <= size2 - size1;i++) {
		bool ck = true;
		for (int j = 0; j < size1; j++) {
			if (s1[j] != s2[i + j]) {
				ck = false;
				break;
			}
		}
		if (ck) {
			return i+1;
		}
	}
	return -1;
}
int main() {
	char a[100], b[100];
	cout << "input char1:";
	cin.getline(a,100);
	cout << "input char2:";
	cin.getline(b, 100);
	int x = indexof(a, b);
	cout << "Return:" << x;
	return x;
}
