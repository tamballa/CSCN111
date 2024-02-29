#include "Student.h" 
#include <iostream>
#include <string>
using namespace std;
	//default construcor = zero argument constructor
	//constructor function --constructor name bust be same name as class
Student::Student(string sn, string id, double gpa)//: StudentName(sn), StudentID(id), StudentGPA(gpa) -- another way to assign as below
	{
		setStudentName(sn);
		setStudentID(id);
		setStudentGPA(gpa);
	}
	Student::Student() //constructor
	{
		StudentGPA = 0; //do not need to initialiaze strings 
		cout << "Im in the default constructor" << endl;
	}
	Student::~Student() { cout << "Im in the destructor" << endl; }//destructor

	//setter
	void Student::setStudentName(string sn)
	{
		StudentName = sn;
	}
	void Student::setStudentID(string id)
	{
		StudentID = id;
	}
	void Student::setStudentGPA(double gpa)
	{
		if (gpa < 0)
		{
			cout << "GPA cannot be negative" << endl;
			StudentGPA = gpa;
		}
		StudentGPA = gpa;
	}
	//getters
	string Student::getStudentName() const //locks down my object so it does not allow any changes ____ use anytime with get function
									//can only call constant dunctions withing this function.
	{
		return StudentName;
	}
	string Student::getStudentID() const
	{
		return StudentID;
	}
	double Student::getStudentGPA() const
	{
		return StudentGPA;
	} 