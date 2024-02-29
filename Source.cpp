#include <iostream>
#include <string>
using namespace std;

struct Date
{
	int month;
	int day;
	int year; 
};

struct Student //creating a data type
{
	string StudentName;
	string StudentID;
	double GPA; 
	string clothes[20]; 
	Date birthDate; 
	Date gradDate; 

};


int main()
{

	Student x[5];





	Student s;
	s.birthDate.month = 1;
	s.birthDate.day = 1;
	s.birthDate.year = 2001;
	s.StudentID = "L12345678";
	s.StudentName = "John Doe";
	s.GPA = -4.2;
	s.clothes[0] = "red shirt";
	s.clothes[1] = "blue shirt";
	s.clothes[2] = "green shirt";
	s.clothes[3] = "jeans";
	s.clothes[4] = "hat";

	cout << s.birthDate.month << "/" << s.birthDate.day << "/" << s.birthDate.year; 
	return 0; 

	x[0].StudentID = "L99999";
	x[0].StudentName = "Tanya";
	x[0].GPA = 4.0;
	x[0].clothes[0] = "Dress"; 

	for (int i = 0; i < 5; i++)
	{
		cout << "Student name: ";
		cin >> x[i].StudentName;
		cout << "Student ID: ";
		cin >> x[i].StudentID;
		cout << "GPA: ";
		cin >> x[i].GPA;

	}
	for (int i = 0; i < 5; ++i)
	{
		cout << x[i].StudentName << endl; 
		cout << x[i].StudentID << endl; 
		cout << x[i].GPA << endl; 
	}
	return 0; 

	Student s1; 
	s1 = s; 

	cout << s.StudentID << endl; 
	cout << s.StudentName << endl;
	cout << s.GPA << endl;
	for (int i = 0; i < 20; ++i)
		cout << s.clothes[i] << endl; 


	cout << s1.StudentID << endl;
	cout << s1.StudentName << endl;
	cout << s1.GPA << endl;
	for (int i = 0; i < 20; ++i)
		cout << s1.clothes[i] << endl;








	return 0; 
}