#include<iostream>
using namespace std;
class V_z {
public:
	void V();
	V_z() {
		cout << "input:";
		cin >> length >> width >> height;
	}
private:
	int length;
	int width;
	int height;
};
void V_z::V() {
	int v = length * width * height;
	cout << "V=" << v << endl;
}
int main() {
	V_z a1;
	a1.V();
	V_z a2;
	a2.V();
	V_z a3;
	a3.V();
}