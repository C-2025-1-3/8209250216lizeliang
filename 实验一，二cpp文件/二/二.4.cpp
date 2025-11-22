#include<iostream>
using namespace std;
	double num1, num2, result;
	char operation;
	int main() {
		cout << "第一个数:";
		cin >> num1;
		cout << "简单算符(+,-,*,/):";
		cin >> operation;
		cout << "第二个数:";
		cin >> num2;
		switch (operation)
		{
		case '*':
			result = num1 * num2;
			cout << result;
			break;
		case'-':
			result = num1 - num2;
			cout << result;
			break;
		case'+':
			result = num1 + num2;
			cout << result;
			break;
		case'/':
			if (num2 != 0) {
				result = num1 / num2;
				cout << result;
				break;
			}
			else
				cout << "除数不能为0";
			break;
		default:
			cout << "算符错误";
		}return 0;
	}