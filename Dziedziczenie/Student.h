#pragma once
#include <string>
using namespace std;
class Student
{
protected:
	string name;
	string surname;
	string pesel;
public:
	Student();
	Student(string, string, string);
	void SetName();
	void SetSurname();
	void SetPesel();
};

