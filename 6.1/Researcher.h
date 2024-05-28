#pragma once
#include "Person.h"
#include <iostream>

using namespace std;



class Researcher : public Person {

	string degree;
	short number;
public:
	Researcher(string input_name, string input_surname, string input_patronymic, string input_degree, short input_number) :Person(input_name, input_surname, input_patronymic) {
		degree = input_degree;
		number = input_number;
	}
	void display() override {
		cout << "***������� ���������***\n";
		cout << "���:" << " " << name << endl;
		cout << "�������:" << " " << surname << endl;
		cout << "��������:" << " " << patronymic << endl;
		cout << "C������:" << " " << degree << endl;
		cout << "����� ��������:" << " " << number << endl;
	}

};
