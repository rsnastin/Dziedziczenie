#include <iostream>
#include "Student.h"
#include "SchoolStudent.h"
#include "ClassStudent.h"

using namespace std;
int main()
{
		ClassStudent obiekt;
		obiekt.SetName();
		obiekt.SetSurname();
		obiekt.SetPesel();
		obiekt.SetSchoolStudent();
		obiekt.SetClassStudent();
		obiekt.ShowClassStudent();
}
