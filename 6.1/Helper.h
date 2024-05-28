#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;



class Helper : public Worker {
	short lab;
public:
	Helper(string input_name, string input_surname, string input_patronymic, string input_jobtitle, short input_lab) : Worker(input_name, input_surname, input_patronymic, input_jobtitle) {
		lab = input_lab;
		
	}
	void display() override {
		cout << "***������-��������������� ��������***\n";
		cout << "���:" << " " << name << endl;
		cout << "�������:" << " " << surname << endl;
		cout << "��������:" << " " << patronymic << endl;
		cout << "���������:" << " " << jobtitle << endl;
		cout << "�����������" << " " << lab << endl;
	}

};
