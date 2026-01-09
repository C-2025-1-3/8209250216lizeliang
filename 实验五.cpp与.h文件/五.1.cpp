#include<iostream>
using namespace std;
class Time {
private:
	int hour, minute, sec;
public:
	void cotime() {
		cout << hour << ":" << minute << ":" << sec;
	}
	void citime() {
		cout << "input hour,minute,second:";
		cin >> hour >> minute >> sec;
		if (hour < 0 || hour >= 24) {
			cout << "hour wrong";
			hour = 0;
		}
		if (minute < 0 || minute >= 60) {
			cout << "minute wrong";
			minute = 0;
		}
		if (sec < 0 || sec >= 60) {
			cout << "second wrong";
			sec = 0;
		}
	}
};
int main() {
	Time t1;
	t1.citime();
	t1.cotime();
	return 0;
}