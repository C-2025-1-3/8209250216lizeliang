#include<iostream>
#include<string>
using namespace std;
int main() {
	int b=1;
	for (; b <= 5;b++) {
		string count(b, '*');
		cout << count << endl;
	}return 0;
}