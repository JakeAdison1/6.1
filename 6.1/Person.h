#pragma once
#include <iostream>
using namespace std;
class Person {
protected:
	string name;
	string surname;
	string patronymic;
public:
	Person(string input_name, string input_surname, string input_patronymic) {
		name = input_name; surname = input_surname, patronymic = input_patronymic;
	}
	virtual void display() = 0; // Pure virtual function

};
