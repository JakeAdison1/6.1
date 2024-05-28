#pragma once
#include "Person.h"
#include <iostream>

using namespace std;

class Aspirant : public Person {
	short year;
	int numbercard;
	short mark;
public:
	Aspirant(string input_name, string input_surname, string input_patronymic, short input_year, int input_numbercard, short input_mark) :Person(input_name, input_surname, input_patronymic) {
		year = input_year;
		numbercard = input_numbercard;
		mark = input_mark;

	}
	void display() override {
		cout << "***Аспирант***\n";
		cout << "Имя:" << " " << name << endl;
		cout << "Фамилия:" << " " << surname << endl;
		cout << "Отчество:" << " " << patronymic << endl;
		cout << "Год обучения:" << " " << year << endl;
		cout << "Номер студ. билета:" << " " << numbercard << endl;
		if (mark <= 0 || mark >= 10) {
			cout << "Средний балл" << " " << mark << endl;
		}
		else {
			cout << "Ошибка";
		}
	}
};