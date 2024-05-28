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
		cout << "***Преподаватель***\n";
		cout << "Имя:" << " " << name << endl;
		cout << "Фамилия:" << " " << surname << endl;
		cout << "Отчество:" << " " << patronymic << endl;
		cout << "Должность:" << " " << jobtitle << endl;
		cout << "Ученая степень" << " " << sciencedegree << endl;
	}

};