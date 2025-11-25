#include<iostream>
#include<string>
using namespace std;
int main() {
	int b,zimu=0,shuzi=0,kongge=0,zifu=0;
string a;
cout << "请输入任意长度字符：";
getline(cin, a);
for (b = 0; b < a.length(); b++) {
	switch ((a[b] == 32) ? 1 :
		(a[b] >= 48 && a[b] <= 57) ? 2 :
		((a[b] >= 65) && (a[b] <= 90) || ((a[b] >= 97) && (a[b] <= 122))) ? 3 : 0) {
	case 1:kongge++; break;
	case 2:shuzi++; break;
	case 3:zimu++; break;
	default:zifu++; break;
	}
}cout << "其他字符数" << zifu << endl;
cout << "字母数" << zimu << endl;
cout << "数字数" << shuzi << endl;
cout << "空格数" << kongge << endl; 
return 0;

}
