#include<iostream>
using namespace std;
int main()
{
	float r, h,V;
	const float pi = 3.14159;
	cout << "Ô²×¶µ×°ë¾¶=";
	cin >> r;
	cout << "×¶¸ß=";
	cin >> h;
	V = pi * r * r * h / 3;
	cout << "Ô²×¶Ìå»ý=" << V;
	return 0;
}