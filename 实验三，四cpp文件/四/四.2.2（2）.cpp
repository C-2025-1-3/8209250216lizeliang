#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexstring) {
	int len = strlen(hexstring);
	int ans=0,cx;
	for (int i = 0; i < len; i++) {
		char k = hexstring[len - i - 1];
		if (k >= '0' && k <= '9') {
			cx = k - '0';
		}
		else if (k >= 'a' && k <= 'f') {
			cx = k - 'a' + 10;
		}
		else if (k >= 'A' && k<= 'F') {
			cx = k - 'A' + 10;
		}
		else {
			return -1;
		}
		ans += cx * pow(16,i);
	}
	return ans;
}
int main() {
	char a[100];
	cout << "Input:";
	cin.getline(a, 100);
	int x=parseHex(a);
	if (x == -1) {
		cout << "无效";
	}
	else {
		cout << "十进制为" << x;
	}
}