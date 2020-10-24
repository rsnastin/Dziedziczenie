#pragma once
#include <string>
#include "SchoolStudent.h"

using namespace std;
class  ClassStudent : public SchoolStudent
{
protected:
	int studentClass;
public:
	ClassStudent();
	ClassStudent(string, string, string, string , int);
	void SetClassStudent();
	void ShowClassStudent();
};
