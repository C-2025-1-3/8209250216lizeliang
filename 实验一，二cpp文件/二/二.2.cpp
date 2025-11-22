#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "x=";
	cin >> x;
	if(x > 0) {
		if(x < 1){
		
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (1 <= x ) {
			if(x<5){
				y = 2 / (4*x) + 1;
				cout << y << endl;
			}
		else
		{
			y = x * x;
			cout << y << endl;
		}
		}
		
	}
	return 0;
}