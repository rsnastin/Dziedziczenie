#include "Student.h"
#include "ClassStudent.h"
#include "ClassStudent.h"
#include <iostream>
using namespace std;

ClassStudent::ClassStudent()
{
	name = "brak";
	surname = "brak";
	pesel = "0";
	schoolName = "brak";
	studentClass = 0;

}

ClassStudent::ClassStudent(string imie, string nazwisko, string id, string nazwa, int klasa)
{
	name = imie;
	surname = nazwisko;
	pesel = id;
	schoolName = nazwa;
	studentClass = klasa;
}


void ClassStudent::SetClassStudent()
{
	cout << "Podaj numer klasy: ";
	cin >> studentClass;
}

void ClassStudent::ShowClassStudent()
{
	cout << name << " " << surname << " " << pesel << " " << schoolName << " " << studentClass <<endl;
}
