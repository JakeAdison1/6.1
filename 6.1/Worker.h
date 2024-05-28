#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Worker : public Person {
protected:
	string jobtitle;
public:
	Worker(string input_name, string input_surname, string input_patronymic, string input_jobtitle) :Person(input_name, input_surname, input_patronymic) {
		jobtitle = input_jobtitle;
	}
	virtual void display() = 0; // Pure virtual function
};