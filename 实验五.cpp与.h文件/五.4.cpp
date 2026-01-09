#include<iostream>
using namespace std;
class st {
public:
	void set(int n,int g) {
		num = n;
		grade = g;
	}
	void max(st *a,int n) {
		st* k = &a[0];
		for (int i = 0; i < n; i++) {
			if (a[i].grade > k->grade)
				k = &a[i];
		}
		cout << k->num;
	}
private:
	int num;
	int grade;
};
int main() {
	st ss[5];
	ss[0].set(1, 465);
	ss[1].set(2, 345);
	ss[2].set(3, 378);
	ss[3].set(4, 718);
	ss[4].set(5, 186);
	ss->max(ss,5);
}