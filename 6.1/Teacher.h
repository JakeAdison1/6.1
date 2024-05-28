#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;


class Teacher : public Worker {
	string sciencedegree;
public:
	Teacher(string input_name, string input_surname, string input_patronymic, string input_jobtitle, string input_sciencedegree) : Worker(input_name, input_surname, input_patronymic, input_jobtitle) {
		sciencedegree = input_sciencedegree;
	
	}
	void display() override {
		cout << "***�������������***\n";
		cout << "���:" << " " << name << endl;
		cout << "�������:" << " " << surname << endl;
		cout << "��������:" << " " << patronymic << endl;
		cout << "���������:" << " " << jobtitle << endl;
		cout << "������ �������" << " " << sciencedegree << endl;
	}

};