#include<iostream>
#include<vector>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		list3[i + size1] = list2[i];
	}
	for (int j = 0; j < size1+size2; j++) {
		for (int i = 0; i < size1+size2-1; i++) {
			if (list3[i] > list3[i + 1]) {
				int num = list3[i];
				list3[i] = list3[i + 1];
				list3[i + 1] = num;
			}   
		}
	}
}
int main() {
	int size1,size2;
	cout << "input list1(size first):";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "input list2(size first):";
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int *list3=new int[size1+size2];
	merge(list1, size1, list2, size2, list3);
	cout << "megred list:";
	for (int i = 0; i < size1 + size2; i++) {
		cout <<  list3[i] << " ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}