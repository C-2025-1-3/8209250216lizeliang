#include<iostream>
using namespace std;
int main()
{
	char st;
	cout << "×Ö·û£º";
	cin >> st;
	if (st >= 'a' && st <= 'z') {
		char ST = st - 32;
		cout << "´óÐ´:"<<ST << endl;
	}
	else {
		char stt = st + 1;
		cout << "ºó¼Ì:" << stt << endl;
		return 0;
	}
}