#include <iostream>
#include "Aspirant.h"
#include "Teacher.h"
#include "Researcher.h"
#include "Helper.h"


using namespace std;


int main() {
	string name;
	string surname;
	string secondname;
	short mark,lab;
	setlocale(LC_ALL, "RU");
	cin >> mark >> lab;
	Person *person3=new Helper("Dmitriy", "Pupkin", "Sergeevich", "Assistant", 300);
	person3->display();



	Person* person1 = new Aspirant("Name1", "Surname1", "Patronymic1", 2023, 3243343, mark);
	person1->display();

	Person* person2 = new Researcher("Name2", "Surname2", "Patronymic2", "PhD", lab);
	person2->display();

	delete person1;
	delete person2;

	return 0;
}