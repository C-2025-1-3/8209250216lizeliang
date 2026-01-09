#pragma once
class Student {
public:
	void display();
	void set_value();
	Student() {
		set_value();
	}
	Student(int num_,const char name_[20], char sex_) {
		num = num_;
		for (int i = 0; i < strlen(name_); i++) {
			name[i] = name_[i];
		}
		sex = sex_;
	}
private:
	int num;
	char name[20];
	char sex;
};