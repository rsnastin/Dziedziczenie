#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	name = "brak";
	surname = "brak";
	pesel = "0";

}

Student::Student(string imie, string nazwisko,string id)
{
	name = imie;
	surname = nazwisko;
	pesel = id;
}

void Student::SetName()
{
	cout << "Podaj imie: ";
	cin >> name;
}

void Student::SetSurname()
{
	cout << "Podaj nazwisko: ";
	cin >> surname;
}

void Student::SetPesel()
{
	cout << "Podaj pesel: ";
	cin >> pesel;
}
