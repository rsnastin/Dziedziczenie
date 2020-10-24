#pragma once
#include <string>
#include "Student.h"

using namespace std;
class SchoolStudent : public Student
{
protected:
	string schoolName;
public:
	SchoolStudent();
	SchoolStudent(string, string, string, string);
	void SetSchoolStudent();
};
