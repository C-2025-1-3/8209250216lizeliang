#include<iostream>
using namespace std;
int main()
{
	float a;
	int b;
	cout << "»ªÊÏÎÂ¶È=";
	cin >> a;
	b = (a - 32) * 100 / 1.8;
	cout <<"ÉãÊÏÎÂ¶È="<< b / 100 << "." << b % 100;
}