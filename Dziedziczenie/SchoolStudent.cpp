#include "Student.h"
#include "SchoolStudent.h"
#include <iostream>
using namespace std;

SchoolStudent::SchoolStudent()
{
	name = "brak";
	surname = "brak";
	pesel = "0";
	schoolName = "brak";

}

SchoolStudent::SchoolStudent(string imie, string nazwisko,string id, string nazwa)
{
	name = imie;
	surname = nazwisko;
	pesel = id;
	schoolName = nazwa;
}


void SchoolStudent::SetSchoolStudent()
{
	cout << "Podaj nazwe szkoly: ";
	cin >> schoolName;
}