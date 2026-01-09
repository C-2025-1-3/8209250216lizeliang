#include<iostream>
using namespace std;
class Point {
public:
	Point() {
		x = 60, y = 80;
	}
	void setPoint(int i,int j) {
		x += i, y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")";
	}
private:
	int x;
	int y;
};
int main() {
	Point p;
	p.setPoint(4, 48);
	p.display();
}