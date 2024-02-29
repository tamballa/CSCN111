#pragma once
//#ifndef STUDENT_H //if not included then include it 
//#define STUDENT_H
//
//#endif 

#include <iostream>
#include <string>


class Student
{
public:
	//default construcor = zero argument constructor
	//constructor function --constructor name bust be same name as class
	Student(std::string sn, std::string id, double gpa);//: StudentName(sn), StudentID(id), StudentGPA(gpa) -- another way to assign as below
	Student(); //constructor
	~Student(); //destructor

	//setter
	void setStudentName(std::string sn);
	void setStudentID(std::string id);
	void setStudentGPA(double gpa);

	//getters
	std::string getStudentName() const; //locks down my object so it does not allow any changes ____ use anytime with get function
									//can only call constant dunctions withing this function.
	std::string getStudentID() const;
	double getStudentGPA() const;

private:
	//class functions
	std::string StudentName;
	std::string StudentID;
	double StudentGPA;


};