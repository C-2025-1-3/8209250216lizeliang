#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[]) {
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (65 <= s[i]&&s[i] <= 90) {
			int si = s[i] - 'A';
			counts[si]++;
		}
		else if (97 <= s[i]&&s[i] <= 122) {
			int si = s[i] - 'a';
			counts[si]++;
		}
	}
}
int main() {
	char a[100];
	int conts[26] = {0};
	cout << "input:";
	cin.getline(a, 100);
	count(a,conts);
	for (int i = 0; i < 26; i++) {
		if (conts[i] != 0) {
			char x = i + 97;
			cout << x << ":" << conts[i] << " times" << endl;
		}
	}
}